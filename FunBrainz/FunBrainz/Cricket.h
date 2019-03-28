#pragma once
#include "GlobalFuncs.h"
#include <stdio.h>  
#include <utility> 
#include<cmath>
#include<ctime>
#include<string>
#include<iostream>
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cricket
	/// </summary>
	public ref class Cricket : public System::Windows::Forms::Form
	{
	public:
		Cricket(void)
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
		~Cricket()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Cricket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"Cricket";
			this->Text = L"Cricket";
			this->Load += gcnew System::EventHandler(this, &Cricket::Cricket_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Cricket_Load(System::Object^  sender, System::EventArgs^  e) {
				 std::pair <std::string, long int> ques = GlobalFuncs::generateQuestion(4, 1);
				 String ^ x = gcnew String(ques.first.c_str());
				 MessageBox::Show(x); 
			 }
	};
}
