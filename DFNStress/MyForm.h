#pragma once
#include <iostream>
#include <fstream>


#define _USE_MATH_DEFINES
#include <cmath>
namespace DFNStress {

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
		size_t Nf;
		double s1, s3;
	private: System::Windows::Forms::Label^  label4;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number of Fractures";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(305, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"10";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(326, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(305, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 31);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"10";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"s1 (kPa)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(305, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 31);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"5";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"s3 (kPa)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(89, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Created by Sergio Torres PhD";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 290);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"DFNStress";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		Nf = int::Parse(textBox1->Text);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Nf = int::Parse(textBox1->Text);
		s1 = double::Parse(textBox2->Text);
		s3 = double::Parse(textBox3->Text);
		double kappa = 100.0*s1 / s3;
		double L = 100.0;
		double lmin = 1.5;
		double lmax = 100.0;
		double a = 1.5;
		double M_PI = 3.14159265;
		std::ofstream myfile("macro.fmf");
		for (size_t nf = 0; nf < Nf; nf++)
		{
			double x = L*(1.0*rand() / RAND_MAX - 0.5);
			double y = L*(1.0*rand() / RAND_MAX - 0.5);
			double z = L*(1.0*rand() / RAND_MAX - 0.5);
			double phi = 2 * M_PI*double(rand()) / RAND_MAX;
			double theta = acos(log(2 * sinh(kappa)*double(rand()) / RAND_MAX + exp(-kappa)) / kappa);
			double lf = pow((pow(lmax, (1.0 - a)) - pow(lmin, (1.0 - a)))*rand() / RAND_MAX + pow(lmin, (1 - a)), 1.0 / (1 - a));
			myfile << " BEGIN SingleFracture \n";
			myfile << "	Name = \"Single Fracture " << nf+1 <<"\" \n";
			myfile << "	Set = \"SF" << nf+1 << "\" \n";
			myfile << "	Center = " << x << ", " << y << ", " << z << "\n";
			myfile << "	PoleTrPl trend = " << theta * 180 / M_PI << " plunge = " << phi * 180 / M_PI << "\n";
			myfile << "	Radius = " << lf << "\n";
			myfile << "	NumSides = 4 \n";
			myfile << "	MaxElementSize = 0 \n";
			myfile << "	Property Name = \"Aperture\" Type = \"CONSTANT\" \"Value\" = 0.001 \n";
			myfile << "	Property Name = \"Permeability\" Type = \"CONSTANT\" \"Value\" = 1.0e5 \n";
			myfile << "	Property Name = \"Compressibility\" Type = \"CONSTANT\" \"Value\" = 1.0e-7 \n";
			myfile << " END \n";

		}
		myfile << " BEGIN CREATEREGION \n";
		myfile << "   ObjectName = \"RegionBox_1\" \n";
		myfile << "   Type = \"Box\" \n";
		myfile << "   Center = 0.0, 0.0, 0.0 \n";
		myfile << "   Size = " << L << ", " << L << ", " << L << "\n";
		myfile << " END \n";
		myfile << " BEGIN CLIPFRACTURES \n";
		myfile << "   Object = \"RegionBox_1\" \n";
		myfile << "   ClipToPositive = 1 \n";
		myfile << " END \n";

		myfile.close();
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		s1 = double::Parse(textBox2->Text);
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		s3 = double::Parse(textBox3->Text);
	}
};
}
