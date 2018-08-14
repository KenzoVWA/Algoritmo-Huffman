#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct node
{


	node * leftChild;
	node * rightChild;

	double frequency;
	string content;
	string code;


};




class Huffman{
public:

vector<string> codigoo;
vector<string> letras_arbol;
node root;


	Huffman(){
	
	
	};
	vector<node> nodeArray;
	node  extractMin()
{
	double temp = (double)INT_MAX;
	vector<node>::iterator i1, pos;
	for (i1 = nodeArray.begin(); i1 != nodeArray.end(); i1++)
	{

		if (temp>(*i1).frequency)
		{
			pos = i1;
			temp = (*i1).frequency;
		}
	}

	node tempNode = (*pos);
	nodeArray.erase(pos);

	return tempNode;
}

node getHuffmanTree()
{




	while (!nodeArray.empty())
	{


		node * tempNode = new node;
		node * tempNode1 = new node;
		node * tempNode2 = new node;
		*tempNode1 = extractMin();
		*tempNode2 = extractMin();


		tempNode->leftChild = tempNode1;
		tempNode->rightChild = tempNode2;
		tempNode->frequency = tempNode1->frequency + tempNode2->frequency;
		nodeArray.push_back(*tempNode);
		if (nodeArray.size() == 1)//only the root node exsits
		{
			break;
		}
	}
	return nodeArray[0];
}

void BFS(node * temproot, string s)
{
	node * root1 = new node;
	root1 = temproot;

	root1->code = s;
	if (root1 == NULL)
	{

	}
	else if (root1->leftChild == NULL && root1->rightChild == NULL)
	{
		letras_arbol.push_back(root1->content);
		codigoo.push_back(root1->code);
	}
	else
	{

		root1->leftChild->code = s.append("0");
		s.erase(s.end() - 1);
		root1->rightChild->code = s.append("1");
		s.erase(s.end() - 1);


		BFS(root1->leftChild, s.append("0"));
		s.erase(s.end() - 1);
		BFS(root1->rightChild, s.append("1"));
		s.erase(s.end() - 1);
	}


}

void getHuffmanCode(vector<int>& frecuencias, vector<char>& caracteres)
{
	int size, i;
	double tempDouble;
	string tempString = "";

	/*cout << "Numero de caracteres a ingresar c/ frecuencias!" << endl;*/
	size = frecuencias.size();

	for (i = 0; i<size; i++)
	{
		/*cout << "Ingrese uno de los caracteres y su frecuencia luego..." << endl;*/
		node tempNode;
		tempString = caracteres[i];
		tempDouble = frecuencias[i];


		tempNode.frequency = tempDouble;
		tempNode.content = tempString;
		tempNode.leftChild = NULL;
		tempNode.rightChild = NULL;
		nodeArray.push_back(tempNode);
	}


	node root = getHuffmanTree();


	BFS(&root, "");

}

bool repetido(char* texto, char letra, int i){

	for (int j = i; j > 0; j--){
		if (letra == texto[j - 1]){
			return true;
		}
	}

	return false;
}




};





