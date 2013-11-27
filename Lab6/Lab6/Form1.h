#pragma once
#include "unit.h"
#include "texts.h"

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  NameFile;
	private: System::Windows::Forms::Label^  InName;
	private: System::Windows::Forms::Label^  InDate;

	protected: 

	protected: 






	private: System::Windows::Forms::Button^  ReadFields;





	private: System::Windows::Forms::Button^  OutPutName;

	private: System::Windows::Forms::Button^  OutPutDate;
	private: System::Windows::Forms::Button^  OutPutLength;








	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  OutName;
	private: System::Windows::Forms::Label^  OutDate;
	private: System::Windows::Forms::Label^  OutLength;

	private: System::Windows::Forms::Button^  CheckFields;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  InFileText;
	private: System::Windows::Forms::Button^  InFileTextClean;
	private: System::Windows::Forms::Label^  TextAddEndLabel;



	private: System::Windows::Forms::RichTextBox^  AddFileText;
	private: System::Windows::Forms::RichTextBox^  OutPutFileText;
	private: System::Windows::Forms::Button^  OutPutFileTextButton;



	private: System::Windows::Forms::Button^  OutPutStatus;


	private: System::Windows::Forms::Label^  OutStatus;
	private: System::Windows::Forms::Button^  AddFileTextButton;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;









	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NameFile = (gcnew System::Windows::Forms::TextBox());
			this->InName = (gcnew System::Windows::Forms::Label());
			this->InDate = (gcnew System::Windows::Forms::Label());
			this->ReadFields = (gcnew System::Windows::Forms::Button());
			this->OutPutName = (gcnew System::Windows::Forms::Button());
			this->OutPutDate = (gcnew System::Windows::Forms::Button());
			this->OutPutLength = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->OutName = (gcnew System::Windows::Forms::Label());
			this->OutDate = (gcnew System::Windows::Forms::Label());
			this->OutLength = (gcnew System::Windows::Forms::Label());
			this->CheckFields = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InFileText = (gcnew System::Windows::Forms::RichTextBox());
			this->InFileTextClean = (gcnew System::Windows::Forms::Button());
			this->TextAddEndLabel = (gcnew System::Windows::Forms::Label());
			this->AddFileText = (gcnew System::Windows::Forms::RichTextBox());
			this->OutPutFileText = (gcnew System::Windows::Forms::RichTextBox());
			this->OutPutFileTextButton = (gcnew System::Windows::Forms::Button());
			this->OutPutStatus = (gcnew System::Windows::Forms::Button());
			this->OutStatus = (gcnew System::Windows::Forms::Label());
			this->AddFileTextButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// NameFile
			// 
			this->NameFile->Location = System::Drawing::Point(435, 31);
			this->NameFile->Name = L"NameFile";
			this->NameFile->Size = System::Drawing::Size(156, 22);
			this->NameFile->TabIndex = 0;
			// 
			// InName
			// 
			this->InName->AutoSize = true;
			this->InName->Location = System::Drawing::Point(326, 34);
			this->InName->Name = L"InName";
			this->InName->Size = System::Drawing::Size(80, 17);
			this->InName->TabIndex = 1;
			this->InName->Text = L"��� �����";
			// 
			// InDate
			// 
			this->InDate->AutoSize = true;
			this->InDate->Location = System::Drawing::Point(301, 64);
			this->InDate->Name = L"InDate";
			this->InDate->Size = System::Drawing::Size(105, 17);
			this->InDate->TabIndex = 3;
			this->InDate->Text = L"���� ��������";
			// 
			// ReadFields
			// 
			this->ReadFields->Location = System::Drawing::Point(338, 96);
			this->ReadFields->Name = L"ReadFields";
			this->ReadFields->Size = System::Drawing::Size(77, 39);
			this->ReadFields->TabIndex = 6;
			this->ReadFields->Text = L"OK";
			this->ReadFields->UseVisualStyleBackColor = true;
			this->ReadFields->Click += gcnew System::EventHandler(this, &Form1::ReadFields_Click);
			// 
			// OutPutName
			// 
			this->OutPutName->Location = System::Drawing::Point(8, 258);
			this->OutPutName->Name = L"OutPutName";
			this->OutPutName->Size = System::Drawing::Size(133, 27);
			this->OutPutName->TabIndex = 8;
			this->OutPutName->Text = L"������� ���";
			this->OutPutName->UseVisualStyleBackColor = true;
			this->OutPutName->Click += gcnew System::EventHandler(this, &Form1::OutPutName_Click);
			// 
			// OutPutDate
			// 
			this->OutPutDate->Location = System::Drawing::Point(8, 302);
			this->OutPutDate->Name = L"OutPutDate";
			this->OutPutDate->Size = System::Drawing::Size(133, 27);
			this->OutPutDate->TabIndex = 9;
			this->OutPutDate->Text = L"������� ����";
			this->OutPutDate->UseVisualStyleBackColor = true;
			this->OutPutDate->Click += gcnew System::EventHandler(this, &Form1::OutPutDate_Click);
			// 
			// OutPutLength
			// 
			this->OutPutLength->Location = System::Drawing::Point(8, 349);
			this->OutPutLength->Name = L"OutPutLength";
			this->OutPutLength->Size = System::Drawing::Size(133, 27);
			this->OutPutLength->TabIndex = 10;
			this->OutPutLength->Text = L"������� �����";
			this->OutPutLength->UseVisualStyleBackColor = true;
			this->OutPutLength->Click += gcnew System::EventHandler(this, &Form1::OutPutSize_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(434, 59);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(157, 22);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// OutName
			// 
			this->OutName->AutoSize = true;
			this->OutName->Location = System::Drawing::Point(147, 263);
			this->OutName->Name = L"OutName";
			this->OutName->Size = System::Drawing::Size(33, 17);
			this->OutName->TabIndex = 12;
			this->OutName->Text = L"���";
			// 
			// OutDate
			// 
			this->OutDate->AutoSize = true;
			this->OutDate->Location = System::Drawing::Point(147, 307);
			this->OutDate->Name = L"OutDate";
			this->OutDate->Size = System::Drawing::Size(105, 17);
			this->OutDate->TabIndex = 13;
			this->OutDate->Text = L"���� ��������";
			// 
			// OutLength
			// 
			this->OutLength->AutoSize = true;
			this->OutLength->Location = System::Drawing::Point(147, 354);
			this->OutLength->Name = L"OutLength";
			this->OutLength->Size = System::Drawing::Size(99, 17);
			this->OutLength->TabIndex = 14;
			this->OutLength->Text = L"����� ����� ";
			// 
			// CheckFields
			// 
			this->CheckFields->Location = System::Drawing::Point(421, 96);
			this->CheckFields->Name = L"CheckFields";
			this->CheckFields->Size = System::Drawing::Size(170, 38);
			this->CheckFields->TabIndex = 15;
			this->CheckFields->Text = L"��������";
			this->CheckFields->UseVisualStyleBackColor = true;
			this->CheckFields->Click += gcnew System::EventHandler(this, &Form1::CheckFields_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Info;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�����ToolStripMenuItem, 
				this->������������ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(598, 28);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->������������ToolStripMenuItem->Text = L"�������� ����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������������ToolStripMenuItem_Click);
			// 
			// InFileText
			// 
			this->InFileText->Location = System::Drawing::Point(8, 31);
			this->InFileText->Name = L"InFileText";
			this->InFileText->Size = System::Drawing::Size(287, 133);
			this->InFileText->TabIndex = 17;
			this->InFileText->Text = L"";
			// 
			// InFileTextClean
			// 
			this->InFileTextClean->Location = System::Drawing::Point(29, 170);
			this->InFileTextClean->Name = L"InFileTextClean";
			this->InFileTextClean->Size = System::Drawing::Size(223, 36);
			this->InFileTextClean->TabIndex = 18;
			this->InFileTextClean->Text = L"�������� ���� �����";
			this->InFileTextClean->UseVisualStyleBackColor = true;
			this->InFileTextClean->Click += gcnew System::EventHandler(this, &Form1::InFileTextClean_Click);
			// 
			// TextAddEndLabel
			// 
			this->TextAddEndLabel->AutoSize = true;
			this->TextAddEndLabel->Location = System::Drawing::Point(335, 150);
			this->TextAddEndLabel->Name = L"TextAddEndLabel";
			this->TextAddEndLabel->Size = System::Drawing::Size(213, 17);
			this->TextAddEndLabel->TabIndex = 19;
			this->TextAddEndLabel->Text = L"�������� ����� � ����� �����";
			// 
			// AddFileText
			// 
			this->AddFileText->Location = System::Drawing::Point(299, 170);
			this->AddFileText->Name = L"AddFileText";
			this->AddFileText->Size = System::Drawing::Size(287, 66);
			this->AddFileText->TabIndex = 20;
			this->AddFileText->Text = L"";
			// 
			// OutPutFileText
			// 
			this->OutPutFileText->Location = System::Drawing::Point(304, 273);
			this->OutPutFileText->Name = L"OutPutFileText";
			this->OutPutFileText->Size = System::Drawing::Size(287, 111);
			this->OutPutFileText->TabIndex = 21;
			this->OutPutFileText->Text = L"";
			// 
			// OutPutFileTextButton
			// 
			this->OutPutFileTextButton->Location = System::Drawing::Point(353, 390);
			this->OutPutFileTextButton->Name = L"OutPutFileTextButton";
			this->OutPutFileTextButton->Size = System::Drawing::Size(211, 39);
			this->OutPutFileTextButton->TabIndex = 22;
			this->OutPutFileTextButton->Text = L"������� ���������� �����";
			this->OutPutFileTextButton->UseVisualStyleBackColor = true;
			this->OutPutFileTextButton->Click += gcnew System::EventHandler(this, &Form1::OutPutFileTextButton_Click);
			// 
			// OutPutStatus
			// 
			this->OutPutStatus->Location = System::Drawing::Point(8, 390);
			this->OutPutStatus->Name = L"OutPutStatus";
			this->OutPutStatus->Size = System::Drawing::Size(142, 27);
			this->OutPutStatus->TabIndex = 23;
			this->OutPutStatus->Text = L"��������� �����";
			this->OutPutStatus->UseVisualStyleBackColor = true;
			this->OutPutStatus->Click += gcnew System::EventHandler(this, &Form1::OutPutStatus_Click);
			// 
			// OutStatus
			// 
			this->OutStatus->AutoSize = true;
			this->OutStatus->Location = System::Drawing::Point(156, 395);
			this->OutStatus->Name = L"OutStatus";
			this->OutStatus->Size = System::Drawing::Size(77, 17);
			this->OutStatus->TabIndex = 24;
			this->OutStatus->Text = L"���������";
			// 
			// AddFileTextButton
			// 
			this->AddFileTextButton->Location = System::Drawing::Point(353, 242);
			this->AddFileTextButton->Name = L"AddFileTextButton";
			this->AddFileTextButton->Size = System::Drawing::Size(190, 29);
			this->AddFileTextButton->TabIndex = 25;
			this->AddFileTextButton->Text = L"�������� � ����� �����";
			this->AddFileTextButton->UseVisualStyleBackColor = true;
			this->AddFileTextButton->Click += gcnew System::EventHandler(this, &Form1::AddFileTextButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(598, 429);
			this->Controls->Add(this->AddFileTextButton);
			this->Controls->Add(this->OutStatus);
			this->Controls->Add(this->OutPutStatus);
			this->Controls->Add(this->OutPutFileTextButton);
			this->Controls->Add(this->OutPutFileText);
			this->Controls->Add(this->AddFileText);
			this->Controls->Add(this->TextAddEndLabel);
			this->Controls->Add(this->InFileTextClean);
			this->Controls->Add(this->InFileText);
			this->Controls->Add(this->CheckFields);
			this->Controls->Add(this->OutLength);
			this->Controls->Add(this->OutDate);
			this->Controls->Add(this->OutName);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->OutPutLength);
			this->Controls->Add(this->OutPutDate);
			this->Controls->Add(this->OutPutName);
			this->Controls->Add(this->ReadFields);
			this->Controls->Add(this->InDate);
			this->Controls->Add(this->InName);
			this->Controls->Add(this->NameFile);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
			

#pragma endregion

	
	private: System::Void ReadFields_Click(System::Object^  sender, System::EventArgs^  e) { 
		
				 char *name = new char[] = and_SysStringToChar(NameFile->Text);  //������� String^  � char *				
				 char *date=new char[]= and_SysStringToChar(Convert::ToString(dateTimePicker1->Value)); //������� String^  � char *
				 char *text=new char[]= and_SysStringToChar(InFileText->Text);
				 int len=InFileText->Text->Length;
				 
				 
				  FileObject.Put_Name(name);
				  FileObject.Put_Date(date);
				  FileObject.Change_Text(text);
				  FileObject.Put_Length(len);
		          FileObject.Change_Status(true);
			             
			                                                  
			 }
				 			
private: System::Void OutPutDate_Click(System::Object^  sender, System::EventArgs^  e) { //����� ���� date
			 OutDate->Text=and_CharToSysString(FileObject.Get_Date());
		 }
private: System::Void OutPutSize_Click(System::Object^  sender, System::EventArgs^  e) { //����� ���� size
			 OutLength->Text=Convert::ToString(FileObject.Get_Length());
		 }
private: System::Void OutPutName_Click(System::Object^  sender, System::EventArgs^  e) { //����� ���� name
			 OutName->Text=and_CharToSysString(FileObject.Get_Name());
		 }
private: System::Void CheckFields_Click(System::Object^  sender, System::EventArgs^  e) {

			  switch (FileObject.isError()) { //�������� �� ������
				  case 0: MessageBox::Show("������ ����!");
						  break;
				  case 1: MessageBox::Show("������ ����!");
					      break;
				  case 2: MessageBox::Show("�� ������� ��� �����!"); 
					      break;						 
				  } 
		 }
private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void OutPutFileTextButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 OutPutFileText->Text="";
			 if (FileObject.Get_Length()==0) OutPutFileText->Text="���� ������!"; else 
	 OutPutFileText->Text=and_CharToSysString(FileObject.Get_Text());
		 }
private: System::Void AddFileTextButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 FileObject.Add_Text(and_SysStringToChar(AddFileText->Text));
		 }
private: System::Void OutPutStatus_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (FileObject.Get_Status()) OutStatus->Text="���� ������"; else OutStatus->Text="���� ������";
		 }
private: System::Void InFileTextClean_Click(System::Object^  sender, System::EventArgs^  e) {
			 InFileText->Text="";
		 }
private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FileObject.CleanFile();
		 }
};
}

