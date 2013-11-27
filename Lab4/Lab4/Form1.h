#include <cstring>
#include "unit1.h"
#pragma once

namespace Lab4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(23, 17);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(676, 115);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(56, 156);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(297, 21);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Найти неповторяющиеся в тексте слова";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(56, 199);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(181, 21);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"Найти в тексте цитаты";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(23, 251);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(676, 110);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 373);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Form1";
			this->Text = L"Строки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox2->Text="";
				 if (richTextBox1->Text==L"") MessageBox::Show("Вы не ввели текст!"); else 
					 if (radioButton1->Checked) {



				String^ name_d=Convert::ToString(richTextBox1->Text);
                 char *str = new char[name_d->Length];
                     int i;
                   for(i=0; i<name_d->Length;i++)
                   {
                       str[i] = name_d[i];
				   }

				   str[i]='\0';

				 
				   

                    //Второй способ
			//char *str = new char[] = and_SysStringToChar(richTextBox1->Text); //вызваем так
            //delete [] str;
				   
				  

				   char word2[20]; char *word1=new char[20];
				   

                        int p=0, n,num1,len1,len=richTextBox1->Text->Length;
						 if (str[p]=='"') p++;
						while (p<=len && str) {
								
		                    n=0;
		                    num1=p;
		                    while (str[p]!=' ' && str[p]!=',' && str[p]!='.' && str[p]!='!' && str[p]!='?' && str[p]!=':' && str[p]!=';' && str[p]!='"' && p<=len) {
			                     
								word1[n]=str[p];
			                 n++;p++;
		                      }
							word1[n]='\0';
		                    len1=strlen(word1);
		                  
		                   while (str[p]==' ' || str[p]==',' || str[p]=='.'|| str[p]=='!' || str[p]=='?'|| str[p]==':'|| str[p]==';'|| str[p]=='"') p++;
				       	bool flag=true; int y=0;
		           while (y<len && str && flag) {
			 n=0; 
			while (str[y]!=' ' && str[y]!=',' && str[y]!='.'&& str[y]!='!' && str[y]!='?'&& str[y]!=':'&& str[y]!=';'&& str[y]!='"' && y<=len) {
			  if (y==num1) y+=len1+1;
				word2[n]=str[y];
				n++;y++;
			}
			word2[n]='\0';
			while ((str[y]==' ' || str[y+1]==',' || str[y]=='.'|| str[y]=='!' || str[y]=='?'|| str[y]==':'|| str[y]==';'|| str[y]=='"')) y++;
				
	 
			if (strlen(word1)==strlen(word2) && !strcmp(word1,word2)) flag=false;
		}

				   if (flag) {
					   String^ str;
					   str=and_CharToSysString(word1);
					   richTextBox2->Text+=str  +  "\n";
						   }
	}
				   


					 } 	 if (radioButton2->Checked) {

					String^ name_d=Convert::ToString(richTextBox1->Text);
                 char *str = new char[name_d->Length];
                     int i;
                   for(i=0; i<name_d->Length;i++)
                   {
                       str[i] = name_d[i];
				   }

				   str[i]='\0';

				   

				   int p=0; int len=richTextBox1->Text->Length; char *quote= new char[500];

				   int numb=0;
					   while(p<=len && str) {
						   if (str[p]=='"') numb++;
						   p++;
					   }
					   p=0; int endp=0;
					   if (numb==0) richTextBox2->Text="В данном тексте нет цитат!"; else 
						   if (numb % 2  !=0) richTextBox2->Text="В данном тексте не хватает кавычек!"; else {
				   while (p<=len && str && numb!=0) {
                            p=endp;
					   while (p<=len && str && str[p]!='"') p++;
					   int n=0; p++; numb--;
					   while (p<=len && str && str[p]!='"') {

						   quote[n]=str[p];
						   p++;n++;
					   }
					   endp=p; endp++;
					   numb--;
					   quote[n]='\0';

					   String^ strout;
					   strout=and_CharToSysString(quote);
					   richTextBox2->Text+=strout  +  "\n";
						   }
						   
				   }
						 } 
               
			 }
};
}

