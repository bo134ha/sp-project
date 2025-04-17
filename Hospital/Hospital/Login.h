#pragma once
#include<iostream>
#include<msclr/marshal_cppstd.h>
#include<Windows.h>
#include<fstream>
#include "Doctor.h"


namespace Hospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	struct userN {
		std::string name;
		std::string password;
	};

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form

	{
	public:
		
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ log;
	private: System::Windows::Forms::Button^ sign;



	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Panel^ logPanal;
	private: System::Windows::Forms::Panel^ signPanal;
	private: System::Windows::Forms::TextBox^ passowrd2;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ passord1;

	private: System::Windows::Forms::TextBox^ user;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ confirm;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->logPanal = (gcnew System::Windows::Forms::Panel());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->log = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->signPanal = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->confirm = (gcnew System::Windows::Forms::Button());
			this->passowrd2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->passord1 = (gcnew System::Windows::Forms::TextBox());
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->logPanal->SuspendLayout();
			this->signPanal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::DarkGray;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(93, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(755, 137);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Crimson;
			this->label3->Location = System::Drawing::Point(265, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"structure programing";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkCyan;
			this->label2->Location = System::Drawing::Point(320, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Welcome";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(170, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(421, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"hospital management system";
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->Controls->Add(this->logPanal);
			this->panel2->Controls->Add(this->signPanal);
			this->panel2->Location = System::Drawing::Point(165, 203);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(612, 293);
			this->panel2->TabIndex = 1;
			// 
			// logPanal
			// 
			this->logPanal->BackColor = System::Drawing::Color::DimGray;
			this->logPanal->Controls->Add(this->sign);
			this->logPanal->Controls->Add(this->log);
			this->logPanal->Controls->Add(this->password);
			this->logPanal->Controls->Add(this->name);
			this->logPanal->Controls->Add(this->label6);
			this->logPanal->Controls->Add(this->label5);
			this->logPanal->Controls->Add(this->label4);
			this->logPanal->Location = System::Drawing::Point(3, 3);
			this->logPanal->Name = L"logPanal";
			this->logPanal->Size = System::Drawing::Size(603, 283);
			this->logPanal->TabIndex = 9;
			// 
			// sign
			// 
			this->sign->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sign->BackColor = System::Drawing::Color::DimGray;
			this->sign->FlatAppearance->BorderSize = 0;
			this->sign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sign->Location = System::Drawing::Point(267, 200);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(87, 29);
			this->sign->TabIndex = 8;
			this->sign->Text = L"sign up";
			this->sign->UseVisualStyleBackColor = false;
			this->sign->Click += gcnew System::EventHandler(this, &Login::sign_Click);
			// 
			// log
			// 
			this->log->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->log->BackColor = System::Drawing::Color::Transparent;
			this->log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->log->Location = System::Drawing::Point(267, 165);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(87, 29);
			this->log->TabIndex = 7;
			this->log->Text = L"login";
			this->log->UseVisualStyleBackColor = false;
			this->log->Click += gcnew System::EventHandler(this, &Login::log_Click);
			// 
			// password
			// 
			this->password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(231, 129);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(165, 24);
			this->password->TabIndex = 6;
			// 
			// name
			// 
			this->name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(231, 87);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(165, 24);
			this->name->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(137, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Pssword";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(137, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Username";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(272, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 38);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Login";
			// 
			// signPanal
			// 
			this->signPanal->BackColor = System::Drawing::Color::DimGray;
			this->signPanal->Controls->Add(this->button1);
			this->signPanal->Controls->Add(this->confirm);
			this->signPanal->Controls->Add(this->passowrd2);
			this->signPanal->Controls->Add(this->label10);
			this->signPanal->Controls->Add(this->passord1);
			this->signPanal->Controls->Add(this->user);
			this->signPanal->Controls->Add(this->label8);
			this->signPanal->Controls->Add(this->label9);
			this->signPanal->Controls->Add(this->label7);
			this->signPanal->Location = System::Drawing::Point(6, 0);
			this->signPanal->Name = L"signPanal";
			this->signPanal->Size = System::Drawing::Size(603, 283);
			this->signPanal->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(576, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(15, 18);
			this->button1->TabIndex = 15;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// confirm
			// 
			this->confirm->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->confirm->BackColor = System::Drawing::Color::Transparent;
			this->confirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->confirm->Location = System::Drawing::Point(269, 211);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(87, 29);
			this->confirm->TabIndex = 14;
			this->confirm->Text = L"confirm";
			this->confirm->UseVisualStyleBackColor = false;
			// 
			// passowrd2
			// 
			this->passowrd2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passowrd2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passowrd2->Location = System::Drawing::Point(236, 166);
			this->passowrd2->Name = L"passowrd2";
			this->passowrd2->Size = System::Drawing::Size(165, 24);
			this->passowrd2->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Cyan;
			this->label10->Location = System::Drawing::Point(142, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 20);
			this->label10->TabIndex = 12;
			this->label10->Text = L"confirm";
			// 
			// passord1
			// 
			this->passord1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passord1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passord1->Location = System::Drawing::Point(236, 127);
			this->passord1->Name = L"passord1";
			this->passord1->Size = System::Drawing::Size(165, 24);
			this->passord1->TabIndex = 11;
			// 
			// user
			// 
			this->user->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(236, 85);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(165, 24);
			this->user->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(142, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Pssword";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Yellow;
			this->label9->Location = System::Drawing::Point(139, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Username";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(262, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 38);
			this->label7->TabIndex = 3;
			this->label7->Text = L"sign up";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(93, 599);
			this->panel4->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Location = System::Drawing::Point(848, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(93, 599);
			this->panel3->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Location = System::Drawing::Point(93, 561);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(755, 38);
			this->panel5->TabIndex = 5;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(941, 599);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" welcome";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->logPanal->ResumeLayout(false);
			this->logPanal->PerformLayout();
			this->signPanal->ResumeLayout(false);
			this->signPanal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void log_Click(System::Object^ sender, System::EventArgs^ e) {
		userN doctor[50] = {};
		userN pation[50] = {};
		bool foundD = false;
		bool foundP = false;
		for (int i = 0;i < 50;i++) {
			if (gcnew String(doctor[i].name.c_str()) == name->Text && gcnew String(doctor[i].password.c_str()) == password->Text) {
				foundD = true;
				break;
			}
			else if (gcnew String(pation[i].name.c_str()) == name->Text && gcnew String(pation[i].password.c_str()) == password->Text) {
				foundP = true;
				break;
			}

		}
		if (foundD) {
			this->Hide();
			Doctor^ doctorform = gcnew Doctor();
			doctorform->ShowDialog();
		}
		else if (foundP) {
			//this->Hide();
		}
		else {
			errorProvider1->SetError(name, "wrong password or username!");
			errorProvider1->SetError(password, "wrong password or username!");
		}

	}
private: System::Void sign_Click(System::Object^ sender, System::EventArgs^ e) {
	signPanal->BringToFront();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	signPanal->SendToBack();
}

};
}


