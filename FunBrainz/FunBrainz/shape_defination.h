#pragma once

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;

	/// <summary>
	/// Summary for shape_defination
	/// </summary>
	public ref class shape_defination : public System::Windows::Forms::Form
	{
	public:
		String^ str;
	public:
		shape_defination(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		shape_defination(String^ st, Form^ obj)		//////////////////////taking  a string vaiable (username)  from calling function
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			str=st;
			caller=obj;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~shape_defination()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;


	private: System::ComponentModel::IContainer^  components;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &shape_defination::timer1_Tick);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(274, 76);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 30);
			this->textBox2->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Teal;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(23, 22);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 30);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Go To Page";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &shape_defination::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(126, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 31);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(837, 22);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 31);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &shape_defination::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->richTextBox1->Location = System::Drawing::Point(37, 184);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(611, 179);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(71, 21);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->richTextBox2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(88, 196);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(675, 447);
			this->panel2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(293, 84);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(252, 30);
			this->textBox3->TabIndex = 3;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->richTextBox2->Location = System::Drawing::Point(37, 183);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(611, 179);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->Location = System::Drawing::Point(66, 17);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 150);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &shape_defination::pictureBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->richTextBox3);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(164, 137);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(675, 447);
			this->panel3->TabIndex = 13;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &shape_defination::panel3_Paint);
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(307, 76);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(215, 30);
			this->textBox4->TabIndex = 3;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(37, 183);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(611, 179);
			this->richTextBox3->TabIndex = 1;
			this->richTextBox3->Text = L"";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox3->Location = System::Drawing::Point(72, 23);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 150);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &shape_defination::timer2_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(11, 280);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(675, 447);
			this->panel1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->Location = System::Drawing::Point(579, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 31);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Next";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &shape_defination::button3_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(260, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 31);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Previous";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &shape_defination::button1_Click);
			// 
			// shape_defination
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(956, 609);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"shape_defination";
			this->Text = L"shape_defination";
			this->Load += gcnew System::EventHandler(this, &shape_defination::shape_defination_Load);
			this->Resize += gcnew System::EventHandler(this, &shape_defination::shape_defination_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//3 panel used each panel 1 picturebox and 1 richtextbox
	private:
		int c,z,rowindb;  //c%3=0 panel3 apperear,=1 panel1,=2 panel2....rowin db=number of records in db
#pragma endregion
		Form^ caller;
	private: System::Void shape_defination_Load(System::Object^  sender, System::EventArgs^  e) {
				 //adjusting positions of controls
				 button2->Left = this->Width - 150;
				 //button3->Left = this->Width - 150;
				 panel1->Top = 90;
				 panel2->Top = 90;
				 panel3->Top = 90;	
				 z = int(this->Width - panel1->Width) / 2;
				 rowindb=0;
				 if(str==nullptr)
				 {
					 textBox1->Text="1";

				 }
				 else
					 textBox1->Text=str;

				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 String ^ str = "SELECT * FROM def_table";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 while (reader->Read())
					 {
						 rowindb++;			 //counting number of rows in database

					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 button4_Click(sender,e);
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 //go to page button..
				 //clicking this button takes us to shape defination whose number written in textbox1
				 panel1->Show();
				 panel2->Show();
				 panel3->Show();
				 button1->Show();
				 button3->Show();

				 c = Convert::ToInt16(textBox1->Text);////	 converting from tb1

				 if(c<=1)			 
				 { c=1;				  //if c<1 showing 1st defination
				 textBox1->Text="1";
				 button1->Hide();}
				 if(c>=rowindb)
				 { c=rowindb;
				 //textBox1->Text="36";
				 textBox1->Text=Convert::ToString(rowindb);
				 button3->Hide();
				 }		  //taking defination and shape photo from databse
				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 String ^ str = "SELECT * FROM def_table WHERE ID=" + c + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 if (reader->Read())
					 {
						 if(c%3==1)  //panel1 writing definations in panel1
						 {richTextBox1->Text = (String^)reader->GetString(2);
						 textBox2->Text = (String^)reader->GetString(1);
						 panel1->Left = z;
						 panel3->Left = -panel1->Width;
						 panel2->Left = this->Width;
						 panel2->Hide();
						 panel3->Hide();
						 pictureBox1->ImageLocation = (String^)reader->GetString(3);
						 }


						 if(c%3==0)		 //	 panel3 writing definations in panel3
						 {

							 richTextBox3->Text =(String^)reader->GetString(2);
							 textBox4->Text = (String^)reader->GetString(1);
							 panel2->Left = -panel1->Width;
							 panel1->Left = this->Width;
							 panel3->Left=z;
							 panel2->Hide();
							 panel1->Hide();
							 pictureBox3->ImageLocation = (String^)reader->GetString(3);
						 }
						 if(c%3==2)			   //	 panel2 writing definations in panel2
						 {			   textBox3->Text = (String^)reader->GetString(1);
						 richTextBox2->Text = (String^)reader->GetString(2);
						 panel3->Left = this->Width;
						 panel1->Left = -panel1->Width;
						 panel2->Left =z;
						 panel1->Hide();
						 panel3->Hide();
						 pictureBox2->ImageLocation = (String^)reader->GetString(3);
						 }

					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 panel1->Show();														   //next button  //panel slide from right to left

				 panel2->Show();
				 panel3->Show();
				 button1->Hide();
				 button3->Hide();
				 z = int(this->Width - panel1->Width) / 2;
				 c++;
				 textBox1->Text= Convert::ToString(c);
				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 String ^ str = "SELECT * FROM def_table WHERE ID=" + c + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();
					 //adjusting panel positions and wrting into richtextbox and panel and picture box acc to c  
					 if (reader->Read())
					 {
						 if(c%3==1)
						 {richTextBox1->Text = (String^)reader->GetString(2);
						 textBox2->Text = (String^)reader->GetString(1);
						 panel1->Left = this->Width;
						 panel2->Left = -panel1->Width;
						 pictureBox1->ImageLocation = (String^)reader->GetString(3);	}


						 if(c%3==0)
						 {
							 textBox4->Text = (String^)reader->GetString(1);
							 richTextBox3->Text =(String^)reader->GetString(2);
							 panel3->Left = this->Width;
							 panel1->Left = -panel1->Width;
							 pictureBox3->ImageLocation = (String^)reader->GetString(3);
						 }
						 if(c%3==2)
						 {			    textBox3->Text = (String^)reader->GetString(1);
						 richTextBox2->Text = (String^)reader->GetString(2);
						 panel2->Left = this->Width;
						 panel3->Left = -panel1->Width;
						 pictureBox2->ImageLocation = (String^)reader->GetString(3);
						 }

					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 timer1->Start();//timer 1 called to show panel slididing
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	//last button//panel slide from left to right

				 panel1->Show();
				 panel2->Show();
				 panel3->Show();
				 button1->Hide();
				 button3->Hide();
				 z = int(this->Width - panel1->Width) / 2;

				 c--;
				 textBox1->Text= Convert::ToString(c);
				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 String ^ str = "SELECT * FROM def_table WHERE ID=" + c + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 if (reader->Read())
					 {
						 if(c%3==1)
						 {richTextBox1->Text = (String^)reader->GetString(2);
						 textBox2->Text = (String^)reader->GetString(1);
						 panel1->Left = -panel1->Width;
						 panel3->Left = this->Width;
						 pictureBox1->ImageLocation = (String^)reader->GetString(3);	}
						 if(c%3==0)
						 {
							 textBox4->Text = (String^)reader->GetString(1); 
							 richTextBox3->Text =(String^)reader->GetString(2);
							 panel3->Left = -panel1->Width;
							 panel2->Left = this->Width;
							 pictureBox3->ImageLocation = (String^)reader->GetString(3);
						 }
						 if(c%3==2)
						 {		    textBox3->Text = (String^)reader->GetString(1);
						 richTextBox2->Text = (String^)reader->GetString(2);
						 panel2->Left = -panel1->Width;
						 panel1->Left = this->Width;
						 pictureBox2->ImageLocation = (String^)reader->GetString(3);
						 }

					 }
					 dbcon->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 timer2->Start();;
			 }


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if (c % 3 == 0)
				 {			 //according to c%3 timer stops when panel reach z
					 if (panel3->Left <= z)
					 {
						 timer1->Stop();
						 button3->Show();
						 button1->Show();
						 panel1->Hide();
						 panel2->Hide();


					 }
					 else
					 {		//panel sliding from right to left
						 panel1->Left -= 20;
						 panel2->Left -= 20;
						 panel3->Left -= 20;

					 }
				 }
				 if (c % 3 == 1)
				 {
					 if (panel1->Left <= z)
					 {
						 timer1->Stop();
						 button3->Show();
						 button1->Show();
						 panel3->Hide();
						 panel2->Hide();

					 }
					 else
					 {
						 panel1->Left -= 20;
						 panel2->Left -= 20;
						 panel3->Left -= 20;

					 }
				 }
				 if (c % 3 == 2)
				 {
					 if (panel2->Left <= z)
					 {
						 timer1->Stop();
						 button3->Show();
						 button1->Show();
						 panel3->Hide();
						 panel1->Hide();
					 }
					 else
					 {
						 panel1->Left -= 20;
						 panel2->Left -= 20;
						 panel3->Left -= 20;

					 }
				 }
				 if(c<=1)
				 { c=1;
				 textBox1->Text="1";
				 button1->Hide();}
				 if(c>=rowindb)
				 { c=rowindb;
				 textBox1->Text=Convert::ToString(rowindb);
				 button3->Hide();
				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 //exit button
				 this->Close();
			 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if (c % 3 == 0)
				 {	  //   //according to c%3 timer stops when panel reach z 
					 if (panel3->Left >= z)
					 {
						 timer2->Stop();
						 button3->Show();
						 button1->Show();
						 panel1->Hide();
						 panel2->Hide();


					 }
					 else
					 {	   //panel slinding left to right
						 panel1->Left += 20;
						 panel2->Left += 20;
						 panel3->Left += 20;
					 }
				 }
				 if (c % 3 == 1)
				 {
					 if (panel1->Left >= z)
					 {
						 timer2->Stop();
						 button3->Show();
						 button1->Show();
						 panel3->Hide();
						 panel2->Hide();
					 }
					 else
					 {
						 panel1->Left += 20;
						 panel2->Left += 20;
						 panel3->Left += 20;
					 }
				 }
				 if (c % 3 == 2)
				 {
					 if (panel2->Left >= z)
					 {
						 timer2->Stop();
						 button3->Show();
						 button1->Show();
						 panel3->Hide();
						 panel1->Hide();

					 }
					 else
					 {
						 panel1->Left += 20;
						 panel2->Left += 20;
						 panel3->Left += 20;

					 }
				 }
				 if(c<=1)
				 { c=1;		 //first defination shown
				 textBox1->Text="1";
				 button1->Hide();}	 //last button hide 
				 if(c>=rowindb)
				 { c=rowindb;	  //when shape number(=c) grater than rowin db ,it's set equal to roewindb //last defination shown
				 textBox1->Text=Convert::ToString(rowindb);
				 button3->Hide();//next button hide
				 }

			 }

	private: System::Void shape_defination_Resize(System::Object^  sender, System::EventArgs^  e) {
				 //adjusting z value when form is resized
				 z = int(this->Width - panel1->Width) / 2;
			 }
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
