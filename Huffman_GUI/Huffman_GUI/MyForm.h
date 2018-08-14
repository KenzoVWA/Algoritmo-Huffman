#pragma once
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<vector>
#include "CHuffman.h"


using namespace std;



namespace Huffman_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			obj = new Huffman();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;






	private:
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Button^  btnComprimir;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  lstCodigo;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  lstAfrecuencias;
	private: System::Windows::Forms::ListBox^  lstAcomprimir;
	private: System::Windows::Forms::TextBox^  txtArchivo;
	private: System::Windows::Forms::Button^  btnAbrirArchivo;
	private: System::Windows::Forms::TabPage^  tabPage2;



	private: System::Windows::Forms::TextBox^  txtDescomprimido;
	private: System::Windows::Forms::Button^  btndescomprimir;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btnAbrir_comprimido;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ListBox^  lstArbol;
	private: System::Windows::Forms::Label^  label5;


		int texto3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblnom;

	private: System::Windows::Forms::TextBox^  txtNom1;
	private: System::Windows::Forms::Label^  lblnom2;
	private: System::Windows::Forms::TextBox^  txtNom2;
			 Huffman *obj;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblnom = (gcnew System::Windows::Forms::Label());
			this->txtNom1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lstArbol = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnComprimir = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lstCodigo = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lstAfrecuencias = (gcnew System::Windows::Forms::ListBox());
			this->lstAcomprimir = (gcnew System::Windows::Forms::ListBox());
			this->txtArchivo = (gcnew System::Windows::Forms::TextBox());
			this->btnAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lblnom2 = (gcnew System::Windows::Forms::Label());
			this->txtNom2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtDescomprimido = (gcnew System::Windows::Forms::TextBox());
			this->btndescomprimir = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAbrir_comprimido = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->ShowReadOnly = true;
			this->openFileDialog1->SupportMultiDottedExtensions = true;
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(29, 46);
			this->tabControl1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(825, 456);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->tabPage1->Size = System::Drawing::Size(817, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Compresion";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGreen;
			this->groupBox1->Controls->Add(this->lblnom);
			this->groupBox1->Controls->Add(this->txtNom1);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->lstArbol);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->btnComprimir);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->lstCodigo);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->lstAfrecuencias);
			this->groupBox1->Controls->Add(this->lstAcomprimir);
			this->groupBox1->Controls->Add(this->txtArchivo);
			this->groupBox1->Controls->Add(this->btnAbrirArchivo);
			this->groupBox1->Location = System::Drawing::Point(-2, -26);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->groupBox1->Size = System::Drawing::Size(851, 448);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// lblnom
			// 
			this->lblnom->AutoSize = true;
			this->lblnom->Location = System::Drawing::Point(590, 344);
			this->lblnom->Name = L"lblnom";
			this->lblnom->Size = System::Drawing::Size(88, 21);
			this->lblnom->TabIndex = 16;
			this->lblnom->Text = L"Nombre:";
			this->lblnom->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// txtNom1
			// 
			this->txtNom1->Location = System::Drawing::Point(684, 335);
			this->txtNom1->Name = L"txtNom1";
			this->txtNom1->Size = System::Drawing::Size(100, 30);
			this->txtNom1->TabIndex = 15;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(323, 129);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(161, 236);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// lstArbol
			// 
			this->lstArbol->FormattingEnabled = true;
			this->lstArbol->ItemHeight = 21;
			this->lstArbol->Location = System::Drawing::Point(493, 129);
			this->lstArbol->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->lstArbol->Name = L"lstArbol";
			this->lstArbol->Size = System::Drawing::Size(103, 193);
			this->lstArbol->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(488, 99);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 21);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Letras en Arbol";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(61, 370);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(516, 50);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// btnComprimir
			// 
			this->btnComprimir->Enabled = false;
			this->btnComprimir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComprimir.Image")));
			this->btnComprimir->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnComprimir->Location = System::Drawing::Point(590, 370);
			this->btnComprimir->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->btnComprimir->Name = L"btnComprimir";
			this->btnComprimir->Size = System::Drawing::Size(194, 48);
			this->btnComprimir->TabIndex = 10;
			this->btnComprimir->Text = L"Comprimir";
			this->btnComprimir->UseVisualStyleBackColor = true;
			this->btnComprimir->Click += gcnew System::EventHandler(this, &MyForm::btnComprimir_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(642, 99);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Codigos";
			// 
			// lstCodigo
			// 
			this->lstCodigo->FormattingEnabled = true;
			this->lstCodigo->ItemHeight = 21;
			this->lstCodigo->Location = System::Drawing::Point(647, 129);
			this->lstCodigo->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->lstCodigo->Name = L"lstCodigo";
			this->lstCodigo->Size = System::Drawing::Size(96, 193);
			this->lstCodigo->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 344);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 21);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Codigo Huffman :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(205, 99);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Frecuencias";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 99);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Caracteres";
			// 
			// lstAfrecuencias
			// 
			this->lstAfrecuencias->FormattingEnabled = true;
			this->lstAfrecuencias->ItemHeight = 21;
			this->lstAfrecuencias->Location = System::Drawing::Point(211, 129);
			this->lstAfrecuencias->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->lstAfrecuencias->Name = L"lstAfrecuencias";
			this->lstAfrecuencias->Size = System::Drawing::Size(103, 193);
			this->lstAfrecuencias->TabIndex = 3;
			// 
			// lstAcomprimir
			// 
			this->lstAcomprimir->FormattingEnabled = true;
			this->lstAcomprimir->ItemHeight = 21;
			this->lstAcomprimir->Location = System::Drawing::Point(31, 129);
			this->lstAcomprimir->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->lstAcomprimir->Name = L"lstAcomprimir";
			this->lstAcomprimir->Size = System::Drawing::Size(134, 193);
			this->lstAcomprimir->TabIndex = 2;
			// 
			// txtArchivo
			// 
			this->txtArchivo->Location = System::Drawing::Point(242, 39);
			this->txtArchivo->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->txtArchivo->MaximumSize = System::Drawing::Size(180, 30);
			this->txtArchivo->Multiline = true;
			this->txtArchivo->Name = L"txtArchivo";
			this->txtArchivo->ReadOnly = true;
			this->txtArchivo->Size = System::Drawing::Size(180, 30);
			this->txtArchivo->TabIndex = 1;
			// 
			// btnAbrirArchivo
			// 
			this->btnAbrirArchivo->Location = System::Drawing::Point(31, 36);
			this->btnAbrirArchivo->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->btnAbrirArchivo->Name = L"btnAbrirArchivo";
			this->btnAbrirArchivo->Size = System::Drawing::Size(138, 38);
			this->btnAbrirArchivo->TabIndex = 0;
			this->btnAbrirArchivo->Text = L"Abrir Archivo";
			this->btnAbrirArchivo->UseVisualStyleBackColor = true;
			this->btnAbrirArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnAbrirArchivo_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Salmon;
			this->tabPage2->Controls->Add(this->lblnom2);
			this->tabPage2->Controls->Add(this->txtNom2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->txtDescomprimido);
			this->tabPage2->Controls->Add(this->btndescomprimir);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->btnAbrir_comprimido);
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->tabPage2->Size = System::Drawing::Size(817, 422);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Descompresion";
			// 
			// lblnom2
			// 
			this->lblnom2->AutoSize = true;
			this->lblnom2->Location = System::Drawing::Point(144, 107);
			this->lblnom2->Name = L"lblnom2";
			this->lblnom2->Size = System::Drawing::Size(88, 21);
			this->lblnom2->TabIndex = 18;
			this->lblnom2->Text = L"Nombre:";
			// 
			// txtNom2
			// 
			this->txtNom2->Location = System::Drawing::Point(238, 98);
			this->txtNom2->Name = L"txtNom2";
			this->txtNom2->Size = System::Drawing::Size(100, 30);
			this->txtNom2->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(461, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(241, 238);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 280);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(224, 21);
			this->label6->TabIndex = 7;
			this->label6->Text = L"El Texto encontrado es: ";
			// 
			// txtDescomprimido
			// 
			this->txtDescomprimido->Location = System::Drawing::Point(39, 324);
			this->txtDescomprimido->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->txtDescomprimido->Name = L"txtDescomprimido";
			this->txtDescomprimido->Size = System::Drawing::Size(725, 30);
			this->txtDescomprimido->TabIndex = 3;
			// 
			// btndescomprimir
			// 
			this->btndescomprimir->Enabled = false;
			this->btndescomprimir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btndescomprimir.Image")));
			this->btndescomprimir->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btndescomprimir->Location = System::Drawing::Point(148, 132);
			this->btndescomprimir->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->btndescomprimir->Name = L"btndescomprimir";
			this->btndescomprimir->Size = System::Drawing::Size(211, 54);
			this->btndescomprimir->TabIndex = 2;
			this->btndescomprimir->Text = L"Descomprimir";
			this->btndescomprimir->UseVisualStyleBackColor = true;
			this->btndescomprimir->Click += gcnew System::EventHandler(this, &MyForm::btndescomprimir_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 30);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(609, 30);
			this->textBox1->TabIndex = 1;
			// 
			// btnAbrir_comprimido
			// 
			this->btnAbrir_comprimido->Location = System::Drawing::Point(39, 30);
			this->btnAbrir_comprimido->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->btnAbrir_comprimido->Name = L"btnAbrir_comprimido";
			this->btnAbrir_comprimido->Size = System::Drawing::Size(138, 33);
			this->btnAbrir_comprimido->TabIndex = 0;
			this->btnAbrir_comprimido->Text = L"Abrir Archivo";
			this->btnAbrir_comprimido->UseVisualStyleBackColor = true;
			this->btnAbrir_comprimido->Click += gcnew System::EventHandler(this, &MyForm::btnAbrir_comprimido_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(898, 543);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 4, 6, 4);
			this->Name = L"MyForm";
			this->Text = L"Huffman";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion




	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void btnAbrirArchivo_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^ sr = gcnew
				System::IO::StreamReader(openFileDialog1->FileName);
			txtArchivo->Text = (sr->ReadToEnd());

			sr->Close();
			vector<int> frecuencias;
			vector<char> caracteres;
	
			char* nombre = new char[25];
			char* texto = new char[1000000];
			sprintf(texto, "%s", txtArchivo->Text);
			string texto2 = (string)texto;
			for (int i = 0; i < (int)texto2.size(); i++){
				if (obj->repetido(texto, texto[i], i)){
					//si se repite, no hagas nada, sino :
				}
				else {
					int contador = 0;
					for (int j = 0; j < texto2.size(); j++){
						//cuenta y metelo al vector de frecuencias...
						if (texto[j] == texto[i]){
							contador++;
			
			}
					}
					frecuencias.push_back(contador);
					caracteres.push_back(texto[i]);
				}
			}
			obj->getHuffmanCode(frecuencias, caracteres);
			for (int i = 0; i < frecuencias.size(); i++){
				string hola = obj->codigoo[i];
				String^ chau = gcnew String(hola.c_str());
				lstAcomprimir->Items->Add(Convert::ToChar(caracteres[i]));
				lstAfrecuencias->Items->Add(frecuencias[i]);
				lstCodigo->Items->Add(chau);
				hola = obj->letras_arbol[i];
				String^ holadenuevo = gcnew String(hola.c_str());
				lstArbol->Items->Add(holadenuevo);
				delete chau,holadenuevo;
			}

			string aux;
			for (int i = 0; i < texto2.size(); i++){
				for (int j = 0; j < obj->codigoo.size(); j++){
					if (texto[i] == obj->letras_arbol[j].front()){
						aux= aux + obj->codigoo[j];

					}
				}
			}
			String^ aux2 = gcnew String(aux.c_str());
			richTextBox1->Text = aux2;
			texto3 = texto2.size();

		}
		//txtnombrenuevoarchivo->Enabled = true;
		btnComprimir->Enabled = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			
			
		//ifstream archivo()
	}
private: System::Void lstAcomprimir_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	
	
	
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnComprimir_Click(System::Object^  sender, System::EventArgs^  e) {

	char* texto = new char[100];
	sprintf(texto, "%s", txtArchivo->Text);
	char* comprimido = new char[50];
	sprintf(comprimido, "%s", txtNom1->Text);
	strcat(comprimido,".txt");
	
	FILE* cmpr = fopen(comprimido, "wb");

	//guarda tamanio 
	int tamano = obj->codigoo.size();
	fwrite(&tamano, sizeof(int), 1, cmpr);

	//guarda los codigos
	for (int i = 0; i < obj->codigoo.size(); i++){
		fwrite(&obj->codigoo[i], sizeof(string), 1, cmpr);
	}

	//guarda las letras
	for (int i = 0; i < obj->codigoo.size(); i++){
		fwrite(&obj->letras_arbol[i], sizeof(string), 1, cmpr);
	}

	long tamano2 = texto3;
	fwrite(&tamano2, sizeof(long), 1, cmpr);

	//guarda codigo huffman
	for (int i = 0; i < texto3; i++){
		for (int j = 0; j < obj->codigoo.size(); j++){
			if (texto[i] == obj->letras_arbol[j].front()){
				fwrite(&obj->codigoo[j], sizeof(string), 1, cmpr);
			}
		}
	}

	fclose(cmpr);
	 

}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btndescomprimir_Click(System::Object^  sender, System::EventArgs^  e) {
	
	char* nomnom = new char[50];
	sprintf(nomnom, "%s", textBox1->Text);
	FILE* dcmprs = fopen(nomnom, "rb");

	int tamanodes;
	fread(&tamanodes, sizeof(int), 1, dcmprs);

	//lee los codigos
	vector<string> codigooo;
	vector<string> letras2;

	for (int i = 0; i < tamanodes; i++){
		codigooo.push_back("");;
		letras2.push_back("");
	}


	for (int i = 0; i < tamanodes; i++)
		fread(&codigooo[i], sizeof(string), 1, dcmprs);


	//lee las letras
	for (int i = 0; i < tamanodes; i++){
		fread(&letras2[i], sizeof(string), 1, dcmprs);
	}

	long tamanotxt;
	fread(&tamanotxt, sizeof(long), 1, dcmprs);

	//lee huffman 
	vector<string> huffman;
	for (int i = 0; i < tamanotxt; i++){
		huffman.push_back("");
	}

	for (int i = 0; i < tamanotxt; i++){
		fread(&huffman[i], sizeof(string), 1, dcmprs);
	}

	//crea texto inicial
	vector<string> textofinal;
	for (int i = 0; i < tamanotxt; i++){
		textofinal.push_back("");
	}

	for (int i = 0; i < tamanotxt; i++){
		for (int j = 0; j < tamanodes; j++){
			if (huffman[i] == codigooo[j]){
				textofinal[i] = letras2[j];
			}
		}
	}

	string auxii;
	for (int i = 0; i < textofinal.size(); i++){
		auxii = auxii + textofinal[i];
	}
	//ESTO FALTA , DEBE PONER EL TEXTO EN EL TXTDESCOMPRIMIDO
	String^ aux2ii = gcnew String(auxii.c_str());
	txtDescomprimido->Text = aux2ii;
	fclose(dcmprs);
	
	char* descomprimido = new char[50];
	sprintf(descomprimido, "%s", txtNom2->Text);
	strcat(descomprimido, ".txt");

	FILE* dcmprdd = fopen(descomprimido, "wb");
	for (int i = 0; i < tamanotxt; i++)
		fwrite(textofinal[i].c_str(), sizeof(char), 1, dcmprdd);
	try
	{
		fclose(dcmprdd);
	}
	catch( exception e)
	{
		FILE* lerrorlog = fopen("Errorlog.txt", "wb");
		fwrite(e.what(),sizeof(e.what()),1,lerrorlog);
		fclose(lerrorlog);
	}
}
private: System::Void btnAbrir_comprimido_Click(System::Object^  sender, System::EventArgs^  e) {

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::IO::StreamReader ^ sr = gcnew
			System::IO::StreamReader(openFileDialog1->FileName);
		textBox1->Text = openFileDialog1->SafeFileName;
	}
	btndescomprimir->Enabled = true;
}
private: System::Void btnGuardardescomprimido_Click(System::Object^  sender, System::EventArgs^  e) {



}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
