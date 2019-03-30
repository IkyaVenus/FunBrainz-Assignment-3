#pragma once
#include "Homepage.h"
#using <system.dll>
#include "regex"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
		Form ^ obj;
	public:
		Signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Signup(Form ^ obj1)
		{
			obj=obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label9;
	protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Emailtxt;
	private: System::Windows::Forms::TextBox^  Mobiletxt;


	private: System::Windows::Forms::TextBox^  Classtxt;
	private: System::Windows::Forms::TextBox^  LastNametxt;
	private: System::Windows::Forms::TextBox^  FirstNametxt;
	private: System::Windows::Forms::TextBox^  Passwordtxt;
	private: System::Windows::Forms::TextBox^  UserNametxt;
	private: System::Windows::Forms::Button^  Signupbtn;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  Gendertxt;
	private: System::Windows::Forms::DateTimePicker^  DOBtxt;
	private: System::Windows::Forms::TextBox^  Schooltxt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  Questiontxt;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  Answertxt;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  GuardiansLastNametxt;
	private: System::Windows::Forms::TextBox^  GuardiansFirstNametxt;




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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Emailtxt = (gcnew System::Windows::Forms::TextBox());
			this->Mobiletxt = (gcnew System::Windows::Forms::TextBox());
			this->Classtxt = (gcnew System::Windows::Forms::TextBox());
			this->LastNametxt = (gcnew System::Windows::Forms::TextBox());
			this->FirstNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->UserNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Signupbtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Gendertxt = (gcnew System::Windows::Forms::ComboBox());
			this->DOBtxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->Schooltxt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Questiontxt = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Answertxt = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->GuardiansLastNametxt = (gcnew System::Windows::Forms::TextBox());
			this->GuardiansFirstNametxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(77, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Email ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(77, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Mobile Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(98, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 181);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(88, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(77, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(77, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 20);
			this->label1->TabIndex = 17;
			this->label1->Text = L"User Name";
			// 
			// Emailtxt
			// 
			this->Emailtxt->Location = System::Drawing::Point(188, 238);
			this->Emailtxt->Name = L"Emailtxt";
			this->Emailtxt->Size = System::Drawing::Size(149, 20);
			this->Emailtxt->TabIndex = 8;
			// 
			// Mobiletxt
			// 
			this->Mobiletxt->Location = System::Drawing::Point(188, 208);
			this->Mobiletxt->Name = L"Mobiletxt";
			this->Mobiletxt->Size = System::Drawing::Size(149, 20);
			this->Mobiletxt->TabIndex = 7;
			// 
			// Classtxt
			// 
			this->Classtxt->Location = System::Drawing::Point(188, 115);
			this->Classtxt->Name = L"Classtxt";
			this->Classtxt->Size = System::Drawing::Size(149, 20);
			this->Classtxt->TabIndex = 4;
			// 
			// LastNametxt
			// 
			this->LastNametxt->Location = System::Drawing::Point(188, 89);
			this->LastNametxt->Name = L"LastNametxt";
			this->LastNametxt->Size = System::Drawing::Size(149, 20);
			this->LastNametxt->TabIndex = 3;
			// 
			// FirstNametxt
			// 
			this->FirstNametxt->Location = System::Drawing::Point(188, 63);
			this->FirstNametxt->Name = L"FirstNametxt";
			this->FirstNametxt->Size = System::Drawing::Size(149, 20);
			this->FirstNametxt->TabIndex = 2;
			this->FirstNametxt->TextChanged += gcnew System::EventHandler(this, &Signup::FirstNametxt_TextChanged);
			// 
			// Passwordtxt
			// 
			this->Passwordtxt->Location = System::Drawing::Point(188, 37);
			this->Passwordtxt->Name = L"Passwordtxt";
			this->Passwordtxt->Size = System::Drawing::Size(149, 20);
			this->Passwordtxt->TabIndex = 1;
			// 
			// UserNametxt
			// 
			this->UserNametxt->Location = System::Drawing::Point(188, 11);
			this->UserNametxt->Name = L"UserNametxt";
			this->UserNametxt->Size = System::Drawing::Size(149, 20);
			this->UserNametxt->TabIndex = 0;
			// 
			// Signupbtn
			// 
			this->Signupbtn->Location = System::Drawing::Point(207, 437);
			this->Signupbtn->Name = L"Signupbtn";
			this->Signupbtn->Size = System::Drawing::Size(88, 30);
			this->Signupbtn->TabIndex = 14;
			this->Signupbtn->Text = L"Sign Up";
			this->Signupbtn->UseVisualStyleBackColor = true;
			this->Signupbtn->Click += gcnew System::EventHandler(this, &Signup::Signupbtn_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(59, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Signup::button2_Click);
			// 
			// Gendertxt
			// 
			this->Gendertxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Gendertxt->FormattingEnabled = true;
			this->Gendertxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Others"});
			this->Gendertxt->Location = System::Drawing::Point(188, 179);
			this->Gendertxt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Gendertxt->Name = L"Gendertxt";
			this->Gendertxt->Size = System::Drawing::Size(149, 21);
			this->Gendertxt->TabIndex = 6;
			// 
			// DOBtxt
			// 
			this->DOBtxt->CustomFormat = L"dd-mm-yyyy";
			this->DOBtxt->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOBtxt->Location = System::Drawing::Point(188, 147);
			this->DOBtxt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DOBtxt->MinDate = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			this->DOBtxt->Name = L"DOBtxt";
			this->DOBtxt->Size = System::Drawing::Size(149, 20);
			this->DOBtxt->TabIndex = 5;
			// 
			// Schooltxt
			// 
			this->Schooltxt->Location = System::Drawing::Point(188, 270);
			this->Schooltxt->Name = L"Schooltxt";
			this->Schooltxt->Size = System::Drawing::Size(149, 20);
			this->Schooltxt->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(77, 274);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"School Name";
			// 
			// Questiontxt
			// 
			this->Questiontxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Questiontxt->FormattingEnabled = true;
			this->Questiontxt->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Favourite book", L"Favourite food", L"Favourite teacher", 
				L"Favourite colour", L"birth place"});
			this->Questiontxt->Location = System::Drawing::Point(188, 301);
			this->Questiontxt->Name = L"Questiontxt";
			this->Questiontxt->Size = System::Drawing::Size(149, 21);
			this->Questiontxt->TabIndex = 10;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(82, 332);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 13);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Security Answer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(82, 309);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 13);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Sequirity Question";
			// 
			// Answertxt
			// 
			this->Answertxt->Location = System::Drawing::Point(188, 329);
			this->Answertxt->Name = L"Answertxt";
			this->Answertxt->Size = System::Drawing::Size(149, 20);
			this->Answertxt->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(67, 399);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 13);
			this->label14->TabIndex = 45;
			this->label14->Text = L"GuardiansLastName";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(81, 367);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 13);
			this->label13->TabIndex = 44;
			this->label13->Text = L"GuardiansFirstName";
			// 
			// GuardiansLastNametxt
			// 
			this->GuardiansLastNametxt->Location = System::Drawing::Point(188, 396);
			this->GuardiansLastNametxt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->GuardiansLastNametxt->Name = L"GuardiansLastNametxt";
			this->GuardiansLastNametxt->Size = System::Drawing::Size(149, 20);
			this->GuardiansLastNametxt->TabIndex = 13;
			// 
			// GuardiansFirstNametxt
			// 
			this->GuardiansFirstNametxt->Location = System::Drawing::Point(188, 365);
			this->GuardiansFirstNametxt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->GuardiansFirstNametxt->Name = L"GuardiansFirstNametxt";
			this->GuardiansFirstNametxt->Size = System::Drawing::Size(149, 20);
			this->GuardiansFirstNametxt->TabIndex = 12;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 486);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->GuardiansLastNametxt);
			this->Controls->Add(this->GuardiansFirstNametxt);
			this->Controls->Add(this->Questiontxt);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Answertxt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Schooltxt);
			this->Controls->Add(this->DOBtxt);
			this->Controls->Add(this->Gendertxt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Emailtxt);
			this->Controls->Add(this->Mobiletxt);
			this->Controls->Add(this->Classtxt);
			this->Controls->Add(this->LastNametxt);
			this->Controls->Add(this->FirstNametxt);
			this->Controls->Add(this->Passwordtxt);
			this->Controls->Add(this->UserNametxt);
			this->Controls->Add(this->Signupbtn);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		static OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) 
			 {

				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				 time_t now = time(0);
				 tm *ltm = localtime(&now);
				 int year = 1900 + ltm->tm_year;
				 int month = 1 + ltm->tm_mon;
				 int date = ltm->tm_mday;
				 DOBtxt->Value = DateTime(year, month, date);
				 DOBtxt->MaxDate = DateTime(year, month, date);
			 }


	private : System::Boolean uservalidate ( String ^ s )
			  {


				  Boolean  flag= true;
				  if(!userdatavalidate(s)) 
				  {
					  MessageBox::Show("enter valid  username");
					  return false;
				  }

				  String ^ Sql = "SELECT * FROM  Students WHERE UserName = '" + UserNametxt->Text + "' ";
				  OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				  con->Open();
				  try{
					  OleDb::OleDbDataReader ^ reader=command->ExecuteReader();
					  if(reader->HasRows)  flag=false;
					  con->Close();
				  }
				  catch(Exception ^ ex)
				  {
					  con->Close();
					  MessageBox::Show(ex->Message);
					  return false;
				  }
				  if(!flag) {MessageBox::Show("user name already taken");}
				  return flag;


			  }

			  //datavalidation part
	private : System::Boolean userdatavalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  for (int i = 0; i < s->Length; i++)
				  {
					  if (!(s[i] >='0' && s[i] <='9'||s[i] >='a' && s[i] <='z'||s[i] >='A' && s[i] <='Z'||s[i] == '!'||s[i] == '@'||s[i] == '#'||s[i] == '$'||s[i] == '%'||s[i] == '^'||s[i] == '&'||s[i] == '*')) return false;
				  }
				  return true;
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


				  Regex^ emailregex = gcnew Regex("(?<user>[^@]+)@(?<host>.+)");


				  Match^ m = emailregex->Match(s);

				  if (m->Success)
				  {
					  return true;
				  }
				  else
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
	private: System::Boolean gendervalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }
	private: System::Boolean Schoolvalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }
	private: System::Boolean Questionvalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }
	private: System::Boolean Answervalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }

	private: System::Boolean Passwordvalidate(String ^ s)
			 {

				 if(s=="") return false;
				 if(s->Length<6||s->Length>15) return false;
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


				 UserNametxt->Text=updatetext(UserNametxt->Text);
				 Classtxt->Text=updatetext(Classtxt->Text);
				 Mobiletxt->Text=updatetext(Mobiletxt->Text);
				 Emailtxt->Text=updatetext(Emailtxt->Text);
				 FirstNametxt->Text=updatetext(FirstNametxt->Text);
				 LastNametxt->Text=updatetext(LastNametxt->Text);
				 Schooltxt->Text=updatetext(Schooltxt->Text);
				 Questiontxt->Text=updatetext(Questiontxt->Text);
				 Answertxt->Text=updatetext(Answertxt->Text);

				 if(!uservalidate(UserNametxt->Text))  return false ;
				 if(!Passwordvalidate(Passwordtxt->Text)) {MessageBox::Show("Password Should be Atleast 6 characters  And at max 15 characters");return false;}
				 if(!namevalidate(FirstNametxt->Text))   {MessageBox::Show("enter valid FirstName and FirstName Should be Lessthan 20 characters ");return false;}
				 if(!namevalidate(LastNametxt->Text))   {MessageBox::Show("enter valid LastName and  LastName Should be Lessthan 20 characters");return false;}
				 if(!namevalidate(GuardiansFirstNametxt->Text))   {MessageBox::Show("enter valid GuardiansFirstName and  GuardiansLastFirst Should be Lessthan 20 characters");return false;}
				 if(!namevalidate(GuardiansLastNametxt->Text))   {MessageBox::Show("enter valid GuardiansLastName and  GuardiansLastName Should be Lessthan 20 characters");return false;}

				 if(!classvalidate(Classtxt->Text))  {MessageBox::Show("enter valid class between 1-10");return false;}
				 if(!gendervalidate(Gendertxt->Text)) {MessageBox::Show("enter Gender");return false;}
				 if(!Mobilevalidate(Mobiletxt->Text)) {MessageBox::Show("enter valid Mobile Number");return false ;}
				 if(!Emailvalidate(Emailtxt->Text))  {MessageBox::Show("enter valid Email");return false;}
				 if(!Schoolvalidate(Schooltxt->Text))  {MessageBox::Show("enter valid School Name");return false;}
				 if(!Questionvalidate(Questiontxt->Text))  {MessageBox::Show("select Sequrity Question ");return false;}
				 if(!Answervalidate(Answertxt->Text))  {MessageBox::Show("enter Answer");return false;}

				 return true;
			 }

	private: System::Void  msgx(String ^ s)
			 {
				 MessageBox::Show(s);
			 }


	private: System::Void Signupbtn_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 DateTime ^ var = DOBtxt->Value;
				 String ^  strDate = var->ToString("dd-MM-yyyy");
				 if(!datavalid()) { return;}
				 MessageBox::Show("correct data");
				 try{

					 con->Open();
					 String ^ access1 = "insert into Students ([UserName],[Password],[FirstName],[LastName],[Class],[DateOfBirth],[Gender],[MobileNumber],[Email],[School Name],[Securityquestion],[answer],[GuardiansFirstName],[GuardiansLastName]) values('" + UserNametxt->Text + "','" + Passwordtxt->Text + "','" + FirstNametxt->Text + "','" + LastNametxt->Text + "','" + Classtxt->Text + "','" + strDate + "','" + Gendertxt->Text + "','"+ Mobiletxt->Text + "','"+ Emailtxt->Text + "','"+ Schooltxt->Text +"','" + Questiontxt->Text + "','" + Answertxt->Text + "','" + GuardiansFirstNametxt->Text + "','" + GuardiansLastNametxt->Text + "')";	 
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 MessageBox::Show("Succefully Added");
					 con->Close();

					 Homepage ^ f3 = gcnew Homepage(obj);
					 this->Hide();
					 f3->user = UserNametxt->Text;
					 f3->ShowDialog();
				 }
				 catch (Exception ^ ex)
				 {
					 con->Close();
					 MessageBox::Show(ex->Message);
				 }

			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 obj->Show();
				 this->Hide();
			 }
	private: System::Void FirstNametxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
