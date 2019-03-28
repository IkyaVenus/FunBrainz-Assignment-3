#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace loginform {

	/// <summary>
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::UserControl
	{
	 public:
		String^ user;
	public:
		profile(void)
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
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox9;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  save_button;
	private: System::Windows::Forms::Button^  edit_button;
	private: System::Windows::Forms::ComboBox^  Gendertxt;

	private: System::Windows::Forms::DateTimePicker^  DOBtxt;


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
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->Gendertxt = (gcnew System::Windows::Forms::ComboBox());
			this->DOBtxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(533, 203);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(132, 22);
			this->textBox9->TabIndex = 34;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(533, 149);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(132, 22);
			this->textBox8->TabIndex = 33;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(533, 102);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(132, 22);
			this->textBox7->TabIndex = 32;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(533, 48);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(132, 22);
			this->textBox6->TabIndex = 31;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 173);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 28;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &profile::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 110);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 51);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(392, 201);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 17);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Points";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(392, 149);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Level";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(392, 102);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Email ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(392, 51);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Mobile Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(60, 308);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(47, 225);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Date Of Birth";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 166);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Class";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(61, 51);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(61, 115);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Last Name";
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(656, 308);
			this->save_button->Margin = System::Windows::Forms::Padding(4);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(100, 28);
			this->save_button->TabIndex = 38;
			this->save_button->Text = L"save";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &profile::save_button_Click);
			// 
			// edit_button
			// 
			this->edit_button->Location = System::Drawing::Point(533, 308);
			this->edit_button->Margin = System::Windows::Forms::Padding(4);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(100, 28);
			this->edit_button->TabIndex = 37;
			this->edit_button->Text = L"edit";
			this->edit_button->UseVisualStyleBackColor = true;
			this->edit_button->Click += gcnew System::EventHandler(this, &profile::edit_button_Click);
			// 
			// Gendertxt
			// 
			this->Gendertxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Gendertxt->FormattingEnabled = true;
			this->Gendertxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Others"});
			this->Gendertxt->Location = System::Drawing::Point(176, 305);
			this->Gendertxt->Name = L"Gendertxt";
			this->Gendertxt->Size = System::Drawing::Size(121, 24);
			this->Gendertxt->TabIndex = 39;
			// 
			// DOBtxt
			// 
			this->DOBtxt->CustomFormat = L"dd-mm-yyyy";
			this->DOBtxt->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOBtxt->Location = System::Drawing::Point(176, 225);
			this->DOBtxt->Name = L"DOBtxt";
			this->DOBtxt->Size = System::Drawing::Size(140, 22);
			this->DOBtxt->TabIndex = 40;
			// 
			// profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->DOBtxt);
			this->Controls->Add(this->Gendertxt);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->edit_button);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"profile";
			this->Size = System::Drawing::Size(865, 420);
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void date(String ^ str)
		{
			MessageBox::Show(str);
			    String ^ dd = "";
				 dd = dd + str[0];
				 dd = dd + str[1];
				 int  num1 = Convert::ToInt32(dd);
				 String ^ mm = "";
				 mm = mm + str[3];
				 mm = mm + str[4];
				 int  num2 = Convert::ToInt32(mm);
				 String ^ yyyy = "";
				 yyyy = yyyy + str[6];
				 yyyy = yyyy + str[7];
				 yyyy = yyyy + str[8];
				 yyyy = yyyy + str[9];
				 int  num3 = Convert::ToInt32(yyyy);
				 DOBtxt->Value = DateTime(num3, num2, num1);
		}
	private: System::Void profile_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				   disable();
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
					 String ^ access1 = "SELECT FirstName,LastName,Class,DateOfBirth,Gender,MobileNumber,Email  FROM database_ikya WHERE  UserName  = '" + user + "' ";
					 con->Open();
					 OleDb::OleDbDataReader ^ reader;
				     try{
						 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
						  reader = command->ExecuteReader();
							 while (reader->Read() == true)
							 {
								 textBox1->Text = reader->GetString(0);
								 textBox2->Text = reader->GetString(1);
								 textBox3->Text = Convert::ToString(reader->GetInt32(2));
								 Gendertxt->Text = reader->GetString(4);
								 date(Convert::ToString(reader->GetDateTime(3)));
					    		 textBox6->Text = reader->GetString(5);
								 textBox7->Text = reader->GetString(6);
							 }
						 reader->Close();
						 con->Close();
						
				 }
				 catch (Exception ^ ex)
				 {
					 reader->Close();
					 con->Close();
					 MessageBox::Show(ex->Message);
				 }

			 }
private: System::Void enable()
{
	                 textBox1->Enabled = true;
	  				 textBox2->Enabled = true;
					 textBox3->Enabled = true;
					 DOBtxt->Enabled = true;
			         Gendertxt->Enabled = true;
					 textBox6->Enabled = true;
					 textBox7->Enabled = true;
					 save_button->Visible = true;
}
private: System::Void disable()
{
	                 textBox1->Enabled = false;
					 textBox2->Enabled = false;
					 textBox3->Enabled = false;
					 DOBtxt->Enabled = false;
			         Gendertxt->Enabled = false;
					 textBox6->Enabled = false;
					 textBox7->Enabled = false;
					 save_button->Visible = false;
					 
}
private: System::Void edit_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			         enable();
		 }
		 
			  	private : System::Boolean classvalidate ( String ^ s )
				{
					  if(s=="") return false;
					  if (s->Length >= 3 || s->Length == 0) return false;
					  if (!(s->ToUpper() == s->ToLower()))  return false;
					  for (int i = 0; i < s->Length; i++)
					  {
						  if (!(s[i] >='0' && s[i] <='9')) return false;
					  }
					  int l = Convert::ToInt32(s);
					  if (l >= 11) return false;
					  return true;

				}
				private : System::Boolean Mobilevalidate ( String ^ s )
				{
					if(s=="") return false;
					if (!(s->Length == 10)) return false;
					  for (int  i = 0; i < s->Length; i++)
					  {
						  if (!(s[i] >= '0' && s[i] <= '9')) return false;
					  }
					  return true;
				}
				private : System::Boolean Emailvalidate ( String ^ s )
				{
					 if(s=="") return false;
					  for (int  i = 0; i < s->Length; i++)
					  {
						  if (s[i] == '@') return true;
					  }
					  return false;
				}
			 private: System::Boolean namevalidate(String ^ s)
			 {
						  s = s->ToLower();
						  s = s->TrimEnd(' ');
						  s = s->TrimStart(' ');
						  if(s=="") return false;
						  for (int i = 0; i < s->Length; i++)
						  {
							  if (!(s[i] >= 'a'&&s[i] <= 'z')) return false;
						  }
						  return true;
			 }
			        private: System::String ^ updatetext(String ^ s)
					   {
									s = s->TrimEnd(' ');
									s = s->TrimStart(' ');
									return s;
					   }
			private: System::Boolean  datavalid()
		{
							
					  	textBox3->Text=updatetext(textBox3->Text);
					 	textBox6->Text=updatetext(textBox6->Text);
						textBox7->Text=updatetext(textBox7->Text);
						textBox1->Text=updatetext(textBox1->Text->ToLower());
						textBox2->Text=updatetext(textBox2->Text->ToLower());
							if(!classvalidate(textBox3->Text))  {MessageBox::Show("enter cvalid class between 1-10");return false ;}
							if(!Mobilevalidate(textBox6->Text)) {MessageBox::Show("enter valid Mobile Number");return false ;}
							if(!Emailvalidate(textBox7->Text))  {MessageBox::Show("enter valid Email");return false;}
							if(!namevalidate(textBox1->Text))   {MessageBox::Show("enter valid FirstayyName");return false;}
							if(!namevalidate(textBox2->Text))   {MessageBox::Show("enter valid LastName");return false;}
							return true;
		}
private: System::Void save_button_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 DateTime ^ var = DOBtxt->Value;
			String ^  strDate = var->ToString("dd-MM-yyyy");
		   if(!datavalid()) return ;
						 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
						 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
						 String ^ access1 = "update database_ikya set FirstName= '" + textBox1->Text + "', LastName= '" + textBox2->Text + "', Class= '" + textBox3->Text + "', DateOfBirth= '" + strDate + "', Gender= '" + Gendertxt->Text + "', MobileNumber= '" + textBox6->Text + "', Email= '" + textBox7->Text + "' WHERE  UserName  = '" + user + "' ";
				 	 	 con->Open();
					   try{
							  OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
                              command->ExecuteNonQuery();
							  con->Close();
				              MessageBox::Show("Succefully updated");
			             }
			          catch (Exception ^ ex)
			           {
					          MessageBox::Show(ex->Message);
				        }
			  
			   profile_Load(sender,e);
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
