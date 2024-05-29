#pragma once
//#include"KeyPad.h"
#include "UserWrapper.h"
#using <mscorlib.dll>
#include"UserWrapper.h"
#include <msclr/marshal_cppstd.h> // Include the header for marshaling
#using <mscorlib.dll>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_Contact
	/// </summary>
	public ref class Add_Contact : public System::Windows::Forms::Form
	{
	private:
		UserWrapper^ user;
	public:
		Add_Contact(void)
		{
			InitializeComponent();
			//
			user = gcnew UserWrapper();
			//
		}
		Add_Contact(String ^txt)
		{
			InitializeComponent();
			Mobiletxt->Text = txt;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add_Contact()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Fname_txt;
	private: System::Windows::Forms::TextBox^ Lname_txt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Mobiletxt;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_Contact::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Fname_txt = (gcnew System::Windows::Forms::TextBox());
			this->Lname_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Mobiletxt = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Cyan;
			this->button3->Location = System::Drawing::Point(293, 57);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 57);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Done";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Add_Contact::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->Location = System::Drawing::Point(33, 57);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 57);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Add_Contact::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(121, 136);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 40);
			this->label1->TabIndex = 5;
			this->label1->Text = L"New Contact";
			this->label1->Click += gcnew System::EventHandler(this, &Add_Contact::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(34, 209);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Contact Name";
			this->label2->Click += gcnew System::EventHandler(this, &Add_Contact::label2_Click);
			// 
			// Fname_txt
			// 
			this->Fname_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Fname_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Fname_txt->Font = (gcnew System::Drawing::Font(L"Arial Black", 8, System::Drawing::FontStyle::Bold));
			this->Fname_txt->ForeColor = System::Drawing::Color::DarkGray;
			this->Fname_txt->Location = System::Drawing::Point(33, 249);
			this->Fname_txt->Multiline = true;
			this->Fname_txt->Name = L"Fname_txt";
			this->Fname_txt->Size = System::Drawing::Size(166, 22);
			this->Fname_txt->TabIndex = 7;
			this->Fname_txt->Text = L"First Name";
			this->Fname_txt->Click += gcnew System::EventHandler(this, &Add_Contact::Fname_txt_Click);
			this->Fname_txt->TextChanged += gcnew System::EventHandler(this, &Add_Contact::Fname_txt_TextChanged);
			// 
			// Lname_txt
			// 
			this->Lname_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Lname_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Lname_txt->Font = (gcnew System::Drawing::Font(L"Arial Black", 8, System::Drawing::FontStyle::Bold));
			this->Lname_txt->ForeColor = System::Drawing::Color::DarkGray;
			this->Lname_txt->Location = System::Drawing::Point(33, 291);
			this->Lname_txt->Multiline = true;
			this->Lname_txt->Name = L"Lname_txt";
			this->Lname_txt->Size = System::Drawing::Size(166, 22);
			this->Lname_txt->TabIndex = 8;
			this->Lname_txt->Text = L"Last Name";
			this->Lname_txt->Click += gcnew System::EventHandler(this, &Add_Contact::Lname_txt_Click);
			this->Lname_txt->TextChanged += gcnew System::EventHandler(this, &Add_Contact::Lname_txt_TextChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Cyan;
			this->label3->Location = System::Drawing::Point(34, 386);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Mobile:";
			this->label3->Click += gcnew System::EventHandler(this, &Add_Contact::label3_Click);
			// 
			// Mobiletxt
			// 
			this->Mobiletxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->Mobiletxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Mobiletxt->ForeColor = System::Drawing::Color::White;
			this->Mobiletxt->Location = System::Drawing::Point(105, 386);
			this->Mobiletxt->Name = L"Mobiletxt";
			this->Mobiletxt->Size = System::Drawing::Size(154, 24);
			this->Mobiletxt->TabIndex = 10;
			this->Mobiletxt->TextChanged += gcnew System::EventHandler(this, &Add_Contact::Mobiletxt_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(38, 411);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(180, 2);
			this->panel1->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(34, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 22);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Company Name";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Black", 8, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(33, 345);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 22);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Company";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Add_Contact::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Add_Contact::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Cyan;
			this->label5->Location = System::Drawing::Point(38, 434);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Email:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(38, 461);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(298, 2);
			this->panel2->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(105, 433);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 24);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Add_Contact::textBox2_TextChanged);
			// 
			// Add_Contact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(428, 845);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Mobiletxt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Lname_txt);
			this->Controls->Add(this->Fname_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Arial Black", 10, System::Drawing::FontStyle::Bold));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Add_Contact";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add_Contact";
			this->Load += gcnew System::EventHandler(this, &Add_Contact::Add_Contact_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		user->AddContact(Fname_txt->Text, Lname_txt->Text, textBox1->Text, Mobiletxt->Text, textBox2->Text);
		Add_Contact::Close();
		Fname_txt->Text = "First Name";
		Lname_txt->Text = "Last Name";
		textBox1->Text = "Company";
		Mobiletxt->Text = "";
		textBox2->Text = "";

	}
private: System::Void Add_Contact_Load(System::Object^ sender, System::EventArgs^ e) {
	button3->Enabled =false;
}
	   public:
		   void ChangeButtonColor(int count) {
			   if (count%2==0)
			   {

			   }
			   else
			   {
				   button1->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
				   button3->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
				   panel1->BackColor = System::Drawing::Color::FromArgb(0,0,0);
				   label1->ForeColor= System::Drawing::Color::FromArgb(0,0,0);
				   label2->ForeColor = System::Drawing::Color::FromArgb(0, 0, 0);
				   Mobiletxt->ForeColor = System::Drawing::Color::FromArgb(0, 0, 0);
				   Mobiletxt->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
				   Fname_txt->BackColor= System::Drawing::Color::FromArgb(246, 248, 237);
				   Lname_txt->BackColor = System::Drawing::Color::FromArgb(246, 248, 237);
				   Fname_txt->ForeColor = System::Drawing::Color::FromArgb(0,0,0);
				   Lname_txt->ForeColor = System::Drawing::Color::FromArgb(0,0,0);

			   }
		   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	Fname_txt->Text = "First Name";
	Lname_txt->Text = "Last Name";
	textBox1->Text = "Company";
	Mobiletxt->Text = "";
	textBox2->Text = "";
}
private: System::Void Fname_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Lname_txt->Text != "Last Name" && textBox1->Text != "Company" && Mobiletxt->Text != "" && textBox2->Text != "")
	{
		button3->Enabled = true;
	}
}
private: System::Void Fname_txt_Enter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Fname_txt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Fname_txt->Text == "First Name") {
		Fname_txt->Clear();
	}
}

private: System::Void Lname_txt_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Lname_txt->Text == "Last Name") {
		Lname_txt->Clear();
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Lname_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Fname_txt->Text != "First Name" && textBox1->Text != "Company" &&  Mobiletxt->Text != "" && textBox2->Text != "")
	{
		button3->Enabled = true;
	}
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "Company") {
		textBox1->Clear();
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Fname_txt->Text != "First Name" && Lname_txt->Text != "Last Name" && Mobiletxt->Text != ""&& textBox2->Text != "")
	{
		button3->Enabled = true;
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Fname_txt->Text != "First Name"&&Lname_txt->Text != "Last Name"&&textBox1->Text != "Company"&&Mobiletxt->Text != "")
	{
		button3->Enabled = true;
	} 
}
private: System::Void Mobiletxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Fname_txt->Text != "First Name" && Lname_txt->Text != "Last Name" && textBox1->Text != "Company"  && textBox2->Text != "")
	{
		button3->Enabled = true;
	}
}
};
}
