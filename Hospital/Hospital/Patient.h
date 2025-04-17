#pragma once

namespace Hospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Patient
	/// </summary>
	public ref class Patient : public System::Windows::Forms::Form
	{
	public:
		Patient(void)
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
		~Patient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::DataGridView^ data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;

	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ docName;





	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ History;

	private: System::Windows::Forms::Button^ close2;
	private: System::Windows::Forms::PictureBox^ profile;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ accountToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ availableTimeToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ accountInfo;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::TextBox^ newUser;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ confirm;
	private: System::Windows::Forms::TextBox^ newPass;
	private: System::Windows::Forms::TextBox^ lastPass;
	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ With;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ At;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Label^ selectedDay;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->availableTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->profile = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->docName = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->With = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->At = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->selectedDay = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->History = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->close2 = (gcnew System::Windows::Forms::Button());
			this->accountInfo = (gcnew System::Windows::Forms::Panel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->newUser = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->confirm = (gcnew System::Windows::Forms::TextBox());
			this->newPass = (gcnew System::Windows::Forms::TextBox());
			this->lastPass = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->History->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->accountInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Controls->Add(this->profile);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->docName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 704);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gray;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->accountToolStripMenuItem,
					this->availableTimeToolStripMenuItem, this->logOutToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(35, 177);
			this->menuStrip1->Margin = System::Windows::Forms::Padding(2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(99, 95);
			this->menuStrip1->TabIndex = 31;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accountToolStripMenuItem
			// 
			this->accountToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->accountToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->accountToolStripMenuItem->Name = L"accountToolStripMenuItem";
			this->accountToolStripMenuItem->Size = System::Drawing::Size(92, 29);
			this->accountToolStripMenuItem->Text = L"account";
			// 
			// availableTimeToolStripMenuItem
			// 
			this->availableTimeToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->availableTimeToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->availableTimeToolStripMenuItem->Name = L"availableTimeToolStripMenuItem";
			this->availableTimeToolStripMenuItem->Size = System::Drawing::Size(92, 29);
			this->availableTimeToolStripMenuItem->Text = L"History";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->logOutToolStripMenuItem->ForeColor = System::Drawing::Color::Maroon;
			this->logOutToolStripMenuItem->Margin = System::Windows::Forms::Padding(1);
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(90, 29);
			this->logOutToolStripMenuItem->Text = L"log out";
			// 
			// profile
			// 
			this->profile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile.Image")));
			this->profile->Location = System::Drawing::Point(58, 57);
			this->profile->Name = L"profile";
			this->profile->Size = System::Drawing::Size(53, 51);
			this->profile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile->TabIndex = 30;
			this->profile->TabStop = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 39);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Mr.";
			// 
			// docName
			// 
			this->docName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->docName->AutoSize = true;
			this->docName->BackColor = System::Drawing::Color::Transparent;
			this->docName->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docName->ForeColor = System::Drawing::Color::White;
			this->docName->Location = System::Drawing::Point(72, 120);
			this->docName->Name = L"docName";
			this->docName->Size = System::Drawing::Size(89, 39);
			this->docName->TabIndex = 29;
			this->docName->Text = L"name";
			// 
			// data
			// 
			this->data->AllowUserToOrderColumns = true;
			this->data->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->data->BackgroundColor = System::Drawing::Color::Gray;
			this->data->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->data->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data->ColumnHeadersHeight = 40;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->name, this->time });
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->NullValue = L"-";
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::InfoText;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data->DefaultCellStyle = dataGridViewCellStyle2;
			this->data->EnableHeadersVisualStyles = false;
			this->data->GridColor = System::Drawing::Color::White;
			this->data->Location = System::Drawing::Point(79, 60);
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Format = L"N2";
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->data->RowHeadersVisible = false;
			this->data->RowHeadersWidth = 30;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			this->data->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->data->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->data->Size = System::Drawing::Size(556, 417);
			this->data->TabIndex = 26;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// time
			// 
			this->time->HeaderText = L"time";
			this->time->Name = L"time";
			this->time->ReadOnly = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Controls->Add(this->Delete);
			this->panel2->Controls->Add(this->monthCalendar1);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1094, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(373, 704);
			this->panel2->TabIndex = 27;
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::Maroon;
			this->Delete->FlatAppearance->BorderSize = 0;
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete->ForeColor = System::Drawing::Color::White;
			this->Delete->Location = System::Drawing::Point(172, 538);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(56, 30);
			this->Delete->TabIndex = 29;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(73, 51);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 28;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->With, this->At });
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->Location = System::Drawing::Point(16, 308);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(345, 214);
			this->dataGridView1->TabIndex = 3;
			// 
			// With
			// 
			this->With->HeaderText = L"With";
			this->With->Name = L"With";
			// 
			// At
			// 
			this->At->HeaderText = L"At";
			this->At->Name = L"At";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(119, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Appointments";
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->clear->FlatAppearance->BorderSize = 0;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::White;
			this->clear->Location = System::Drawing::Point(582, 447);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(56, 27);
			this->clear->TabIndex = 1;
			this->clear->Text = L"Clear";
			this->clear->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightGray;
			this->panel3->Controls->Add(this->selectedDay);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->data);
			this->panel3->Location = System::Drawing::Point(289, 107);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(713, 511);
			this->panel3->TabIndex = 30;
			// 
			// selectedDay
			// 
			this->selectedDay->AutoSize = true;
			this->selectedDay->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectedDay->ForeColor = System::Drawing::Color::Black;
			this->selectedDay->Location = System::Drawing::Point(106, 13);
			this->selectedDay->Name = L"selectedDay";
			this->selectedDay->Size = System::Drawing::Size(57, 28);
			this->selectedDay->TabIndex = 28;
			this->selectedDay->Text = L"date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(49, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 28);
			this->label3->TabIndex = 27;
			this->label3->Text = L"for :";
			// 
			// History
			// 
			this->History->BackColor = System::Drawing::Color::LightGray;
			this->History->Controls->Add(this->dataGridView2);
			this->History->Controls->Add(this->label2);
			this->History->Controls->Add(this->close2);
			this->History->Controls->Add(this->clear);
			this->History->Location = System::Drawing::Point(286, 110);
			this->History->Name = L"History";
			this->History->Size = System::Drawing::Size(713, 511);
			this->History->TabIndex = 31;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Gray;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->ColumnHeadersHeight = 40;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->NullValue = L"-";
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::InfoText;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->GridColor = System::Drawing::Color::White;
			this->dataGridView2->Location = System::Drawing::Point(80, 70);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->Format = L"N2";
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 30;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView2->Size = System::Drawing::Size(558, 357);
			this->dataGridView2->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->HeaderText = L"name";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"time";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(296, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 29);
			this->label2->TabIndex = 30;
			this->label2->Text = L"History";
			// 
			// close2
			// 
			this->close2->BackColor = System::Drawing::Color::Silver;
			this->close2->FlatAppearance->BorderSize = 0;
			this->close2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->close2->Location = System::Drawing::Point(678, 3);
			this->close2->Name = L"close2";
			this->close2->Size = System::Drawing::Size(30, 32);
			this->close2->TabIndex = 11;
			this->close2->Text = L"X";
			this->close2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->close2->UseVisualStyleBackColor = false;
			// 
			// accountInfo
			// 
			this->accountInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->accountInfo->BackColor = System::Drawing::Color::LightGray;
			this->accountInfo->Controls->Add(this->label);
			this->accountInfo->Controls->Add(this->newUser);
			this->accountInfo->Controls->Add(this->button1);
			this->accountInfo->Controls->Add(this->label10);
			this->accountInfo->Controls->Add(this->button2);
			this->accountInfo->Controls->Add(this->label9);
			this->accountInfo->Controls->Add(this->label8);
			this->accountInfo->Controls->Add(this->label7);
			this->accountInfo->Controls->Add(this->confirm);
			this->accountInfo->Controls->Add(this->newPass);
			this->accountInfo->Controls->Add(this->lastPass);
			this->accountInfo->Location = System::Drawing::Point(289, 107);
			this->accountInfo->Name = L"accountInfo";
			this->accountInfo->Size = System::Drawing::Size(713, 514);
			this->accountInfo->TabIndex = 32;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(156, 253);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(152, 25);
			this->label->TabIndex = 12;
			this->label->Text = L"new username";
			// 
			// newUser
			// 
			this->newUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newUser->Location = System::Drawing::Point(330, 252);
			this->newUser->Name = L"newUser";
			this->newUser->Size = System::Drawing::Size(179, 26);
			this->newUser->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(651, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 32);
			this->button1->TabIndex = 10;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(166, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(333, 33);
			this->label10->TabIndex = 9;
			this->label10->Text = L"edit account informattion";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::MintCream;
			this->button2->Location = System::Drawing::Point(426, 455);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"save";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(156, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 25);
			this->label9->TabIndex = 7;
			this->label9->Text = L"confirm";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(156, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(149, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"new password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Green;
			this->label7->Location = System::Drawing::Point(156, 185);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 25);
			this->label7->TabIndex = 5;
			this->label7->Text = L"last password";
			// 
			// confirm
			// 
			this->confirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm->Location = System::Drawing::Point(330, 332);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(179, 26);
			this->confirm->TabIndex = 3;
			// 
			// newPass
			// 
			this->newPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newPass->Location = System::Drawing::Point(330, 293);
			this->newPass->Name = L"newPass";
			this->newPass->Size = System::Drawing::Size(179, 26);
			this->newPass->TabIndex = 2;
			// 
			// lastPass
			// 
			this->lastPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastPass->Location = System::Drawing::Point(330, 185);
			this->lastPass->Name = L"lastPass";
			this->lastPass->Size = System::Drawing::Size(179, 26);
			this->lastPass->TabIndex = 1;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy hh:mm tt";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(575, 81);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->ShowUpDown = true;
			this->dateTimePicker1->Size = System::Drawing::Size(149, 20);
			this->dateTimePicker1->TabIndex = 33;
			// 
			// Patient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1467, 704);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->History);
			this->Controls->Add(this->accountInfo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Patient";
			this->Text = L"  Appointment";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->History->ResumeLayout(false);
			this->History->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->accountInfo->ResumeLayout(false);
			this->accountInfo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
