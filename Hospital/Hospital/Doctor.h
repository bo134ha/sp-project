#pragma once
#include<iostream>
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<Windows.h>

namespace Hospital {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Doctor
	/// </summary>
	public ref class Doctor : public System::Windows::Forms::Form
	{
	public:
		
		Doctor(void)
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
		~Doctor()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;






	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ accountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ availableTimeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;



	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::PictureBox^ profile;


	private: System::Windows::Forms::ToolStripMenuItem^ edit;
























	private: System::Windows::Forms::Panel^ allPanel;
	private: System::Windows::Forms::Panel^ Home;


	private: System::Windows::Forms::Label^ docName;


	private: System::Windows::Forms::Label^ label4;









	private: System::Windows::Forms::Label^ selectedDay;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ accountInfo;



	private: System::Windows::Forms::TextBox^ confirm;
	private: System::Windows::Forms::TextBox^ newPass;
	private: System::Windows::Forms::TextBox^ lastPass;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ close2;


private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label;
private: System::Windows::Forms::TextBox^ newUser;
private: System::Windows::Forms::DataGridView^ data;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;



























	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Doctor::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->docName = (gcnew System::Windows::Forms::Label());
			this->profile = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->accountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->availableTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allPanel = (gcnew System::Windows::Forms::Panel());
			this->Home = (gcnew System::Windows::Forms::Panel());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->selectedDay = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->accountInfo = (gcnew System::Windows::Forms::Panel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->newUser = (gcnew System::Windows::Forms::TextBox());
			this->close2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->confirm = (gcnew System::Windows::Forms::TextBox());
			this->newPass = (gcnew System::Windows::Forms::TextBox());
			this->lastPass = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->allPanel->SuspendLayout();
			this->Home->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->accountInfo->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->chart1);
			this->panel1->Controls->Add(this->monthCalendar1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(1032, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(435, 704);
			this->panel1->TabIndex = 4;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->chart1->BackColor = System::Drawing::Color::Teal;
			this->chart1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::LeftRight;
			this->chart1->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Wave;
			this->chart1->BackSecondaryColor = System::Drawing::Color::WhiteSmoke;
			this->chart1->BorderlineColor = System::Drawing::Color::Maroon;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(16, 291);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(407, 348);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(103, 95);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(230, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 37);
			this->label1->TabIndex = 7;
			this->label1->Text = L"available time";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DimGray;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->docName);
			this->panel3->Controls->Add(this->profile);
			this->panel3->Controls->Add(this->menuStrip1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(183, 704);
			this->panel3->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(15, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 39);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Dr .";
			// 
			// docName
			// 
			this->docName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->docName->AutoSize = true;
			this->docName->BackColor = System::Drawing::Color::Transparent;
			this->docName->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->docName->ForeColor = System::Drawing::Color::White;
			this->docName->Location = System::Drawing::Point(76, 119);
			this->docName->Name = L"docName";
			this->docName->Size = System::Drawing::Size(89, 39);
			this->docName->TabIndex = 8;
			this->docName->Text = L"name";
			// 
			// profile
			// 
			this->profile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile.Image")));
			this->profile->Location = System::Drawing::Point(61, 57);
			this->profile->Name = L"profile";
			this->profile->Size = System::Drawing::Size(53, 54);
			this->profile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile->TabIndex = 1;
			this->profile->TabStop = false;
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
			this->menuStrip1->Location = System::Drawing::Point(12, 168);
			this->menuStrip1->Margin = System::Windows::Forms::Padding(2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(153, 95);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// accountToolStripMenuItem
			// 
			this->accountToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->accountToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->edit });
			this->accountToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->accountToolStripMenuItem->Name = L"accountToolStripMenuItem";
			this->accountToolStripMenuItem->Size = System::Drawing::Size(146, 29);
			this->accountToolStripMenuItem->Text = L"account";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::Gray;
			this->edit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(117, 30);
			this->edit->Text = L"edit";
			this->edit->Click += gcnew System::EventHandler(this, &Doctor::edit_Click);
			// 
			// availableTimeToolStripMenuItem
			// 
			this->availableTimeToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->availableTimeToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->availableTimeToolStripMenuItem->Name = L"availableTimeToolStripMenuItem";
			this->availableTimeToolStripMenuItem->Size = System::Drawing::Size(146, 29);
			this->availableTimeToolStripMenuItem->Text = L"available time";
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->logOutToolStripMenuItem->ForeColor = System::Drawing::Color::Maroon;
			this->logOutToolStripMenuItem->Margin = System::Windows::Forms::Padding(1);
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(144, 29);
			this->logOutToolStripMenuItem->Text = L"log out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Doctor::logOutToolStripMenuItem_Click);
			// 
			// allPanel
			// 
			this->allPanel->Controls->Add(this->Home);
			this->allPanel->Controls->Add(this->accountInfo);
			this->allPanel->Controls->Add(this->panel2);
			this->allPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->allPanel->Location = System::Drawing::Point(183, 0);
			this->allPanel->Name = L"allPanel";
			this->allPanel->Size = System::Drawing::Size(849, 704);
			this->allPanel->TabIndex = 11;
			// 
			// Home
			// 
			this->Home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Home->BackColor = System::Drawing::Color::Gainsboro;
			this->Home->Controls->Add(this->data);
			this->Home->Controls->Add(this->selectedDay);
			this->Home->Controls->Add(this->label3);
			this->Home->Location = System::Drawing::Point(87, 89);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(687, 553);
			this->Home->TabIndex = 10;
			// 
			// data
			// 
			this->data->AllowUserToOrderColumns = true;
			this->data->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->data->BackgroundColor = System::Drawing::Color::Silver;
			this->data->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedVertical;
			this->data->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::DarkSlateGray;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->data->ColumnHeadersHeight = 40;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->name, this->time });
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::DarkGray;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->NullValue = L"-";
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::InfoText;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data->DefaultCellStyle = dataGridViewCellStyle6;
			this->data->EnableHeadersVisualStyles = false;
			this->data->GridColor = System::Drawing::Color::White;
			this->data->Location = System::Drawing::Point(91, 79);
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle7->Format = L"N2";
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->data->RowHeadersWidth = 30;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->data->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->data->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->data->Size = System::Drawing::Size(502, 421);
			this->data->TabIndex = 25;
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
			// selectedDay
			// 
			this->selectedDay->AutoSize = true;
			this->selectedDay->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectedDay->ForeColor = System::Drawing::Color::Black;
			this->selectedDay->Location = System::Drawing::Point(86, 30);
			this->selectedDay->Name = L"selectedDay";
			this->selectedDay->Size = System::Drawing::Size(57, 28);
			this->selectedDay->TabIndex = 12;
			this->selectedDay->Text = L"date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(29, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 28);
			this->label3->TabIndex = 11;
			this->label3->Text = L"for :";
			// 
			// accountInfo
			// 
			this->accountInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->accountInfo->BackColor = System::Drawing::Color::LightGray;
			this->accountInfo->Controls->Add(this->label);
			this->accountInfo->Controls->Add(this->newUser);
			this->accountInfo->Controls->Add(this->close2);
			this->accountInfo->Controls->Add(this->label10);
			this->accountInfo->Controls->Add(this->button1);
			this->accountInfo->Controls->Add(this->label9);
			this->accountInfo->Controls->Add(this->label8);
			this->accountInfo->Controls->Add(this->label7);
			this->accountInfo->Controls->Add(this->confirm);
			this->accountInfo->Controls->Add(this->newPass);
			this->accountInfo->Controls->Add(this->lastPass);
			this->accountInfo->Location = System::Drawing::Point(90, 95);
			this->accountInfo->Name = L"accountInfo";
			this->accountInfo->Size = System::Drawing::Size(687, 547);
			this->accountInfo->TabIndex = 11;
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
			// close2
			// 
			this->close2->BackColor = System::Drawing::Color::LightGray;
			this->close2->FlatAppearance->BorderSize = 0;
			this->close2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->close2->Location = System::Drawing::Point(651, 3);
			this->close2->Name = L"close2";
			this->close2->Size = System::Drawing::Size(30, 32);
			this->close2->TabIndex = 10;
			this->close2->Text = L"X";
			this->close2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->close2->UseVisualStyleBackColor = false;
			this->close2->Click += gcnew System::EventHandler(this, &Doctor::close2_Click);
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::MintCream;
			this->button1->Location = System::Drawing::Point(426, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"save";
			this->button1->UseVisualStyleBackColor = false;
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
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(90, 89);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(687, 547);
			this->panel2->TabIndex = 12;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(651, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 32);
			this->button2->TabIndex = 10;
			this->button2->Text = L"X";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Green;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::MintCream;
			this->button3->Location = System::Drawing::Point(426, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 32);
			this->button3->TabIndex = 8;
			this->button3->Text = L"save";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Doctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(1467, 704);
			this->Controls->Add(this->allPanel);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Doctor";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Doctor";
			this->Load += gcnew System::EventHandler(this, &Doctor::Doctor_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->allPanel->ResumeLayout(false);
			this->Home->ResumeLayout(false);
			this->Home->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->accountInfo->ResumeLayout(false);
			this->accountInfo->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	accountInfo->BringToFront();
}
//close button
private: System::Void close2_Click(System::Object^ sender, System::EventArgs^ e) {
	accountInfo->SendToBack();
}
//log out
private: System::Void logOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	/*Login^ loginform = gcnew Login();
	loginform->ShowDialog();*/
}
//about dara will be view in table
private: System::Void Doctor_Load(System::Object^ sender, System::EventArgs^ e) {

}



};
}
struct doc {
	std::string user;
	std::string password;
};