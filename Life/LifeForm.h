#pragma once

#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "MedCardClass.h"
#include "MedPlcClass.h"

namespace Life1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для LifeForm
	/// </summary>
	public ref class LifeForm : public System::Windows::Forms::Form
	{
	public:
		LifeForm(void)
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
		~LifeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Button^ buttonSurch;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonSwich;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxNKL;
	private: System::Windows::Forms::TextBox^ textBoxTime;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxSearh;
	private: System::Windows::Forms::Button^ buttonBack;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSurch = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSwich = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNKL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSearh = (gcnew System::Windows::Forms::TextBox());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Оберіть тип каркти яку хочете знайти:";
			// 
			// buttonSurch
			// 
			this->buttonSurch->Location = System::Drawing::Point(226, 76);
			this->buttonSurch->Name = L"buttonSurch";
			this->buttonSurch->Size = System::Drawing::Size(99, 29);
			this->buttonSurch->TabIndex = 3;
			this->buttonSurch->Text = L"Шукати";
			this->buttonSurch->UseVisualStyleBackColor = true;
			this->buttonSurch->Click += gcnew System::EventHandler(this, &LifeForm::buttonSurch_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(333, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(158, 29);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Лікарі";
			// 
			// buttonSwich
			// 
			this->buttonSwich->Location = System::Drawing::Point(497, 6);
			this->buttonSwich->Name = L"buttonSwich";
			this->buttonSwich->Size = System::Drawing::Size(75, 32);
			this->buttonSwich->TabIndex = 5;
			this->buttonSwich->Text = L"Змінити";
			this->buttonSwich->UseVisualStyleBackColor = true;
			this->buttonSwich->Click += gcnew System::EventHandler(this, &LifeForm::buttonSwich_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(12, 142);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->ReadOnly = true;
			this->textBoxName->Size = System::Drawing::Size(560, 29);
			this->textBoxName->TabIndex = 6;
			// 
			// textBoxNKL
			// 
			this->textBoxNKL->Location = System::Drawing::Point(12, 197);
			this->textBoxNKL->Name = L"textBoxNKL";
			this->textBoxNKL->ReadOnly = true;
			this->textBoxNKL->Size = System::Drawing::Size(560, 29);
			this->textBoxNKL->TabIndex = 7;
			// 
			// textBoxTime
			// 
			this->textBoxTime->Location = System::Drawing::Point(12, 255);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->ReadOnly = true;
			this->textBoxTime->Size = System::Drawing::Size(560, 29);
			this->textBoxTime->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 21);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Шукати:";
			// 
			// textBoxSearh
			// 
			this->textBoxSearh->Location = System::Drawing::Point(95, 41);
			this->textBoxSearh->Name = L"textBoxSearh";
			this->textBoxSearh->Size = System::Drawing::Size(396, 29);
			this->textBoxSearh->TabIndex = 10;
			// 
			// buttonBack
			// 
			this->buttonBack->Location = System::Drawing::Point(462, 322);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(110, 27);
			this->buttonBack->TabIndex = 11;
			this->buttonBack->Text = L"На головну";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &LifeForm::buttonBack_Click);
			// 
			// LifeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCoral;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->buttonBack);
			this->Controls->Add(this->textBoxSearh);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxTime);
			this->Controls->Add(this->textBoxNKL);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonSwich);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonSurch);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"LifeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Life";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSurch_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBoxName->Text = "";
		this->textBoxNKL->Text = "";
		this->textBoxTime->Text = "";
		if (this->textBox1->Text == "Лікарі") {

			MedCard CardWorker;

			if (CardWorker.GetIdByName(this->textBoxSearh->Text) != -1) {

				int ID = CardWorker.GetIdByName(this->textBoxSearh->Text);
				textBoxName->AppendText(CardWorker.GetFIO(ID));
				textBoxNKL->AppendText(CardWorker.GetNKL(ID));
				textBoxTime->AppendText(CardWorker.GetTIME(ID));

			}
			else {
				if (CardWorker.GetIdByNkl(this->textBoxSearh->Text) != -1) {

					int ID = CardWorker.GetIdByNkl(this->textBoxSearh->Text);
					textBoxName->AppendText(CardWorker.GetFIO(ID));
					textBoxNKL->AppendText(CardWorker.GetNKL(ID));
					textBoxTime->AppendText(CardWorker.GetTIME(ID));

				}
				else {
					MessageBox::Show("Error", "Error");
				}
			}

		}
		else {
			if (this->textBox1->Text == "Медичні заклади") {

				MedPlc CardPlc;

				if (CardPlc.GetIdByTYPE(this->textBoxSearh->Text) != -1) {

					int ID = CardPlc.GetIdByTYPE(this->textBoxSearh->Text);
					textBoxName->AppendText(CardPlc.GetTYPE(ID));
					textBoxNKL->AppendText(CardPlc.GetNM(ID));
					textBoxTime->AppendText(CardPlc.GetADRES(ID));

				}
				else {
					if (CardPlc.GetIdByNm(this->textBoxSearh->Text) != -1) {

						int ID = CardPlc.GetIdByNm(this->textBoxSearh->Text);
						textBoxName->AppendText(CardPlc.GetTYPE(ID));
						textBoxNKL->AppendText(CardPlc.GetNM(ID));
						textBoxTime->AppendText(CardPlc.GetADRES(ID));

					}
					else {
						if (CardPlc.GetIdByADRES(this->textBoxSearh->Text) != -1) {

							int ID = CardPlc.GetIdByADRES(this->textBoxSearh->Text);
							textBoxName->AppendText(CardPlc.GetTYPE(ID));
							textBoxNKL->AppendText(CardPlc.GetNM(ID));
							textBoxTime->AppendText(CardPlc.GetADRES(ID));

						}
						else {
							MessageBox::Show("Error", "Error");
						}
					}
				}
			}
		}
	}
	private: System::Void buttonSwich_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "Лікарі") {

			this->textBox1->Text = "Медичні заклади";

		}
		else {
			if (this->textBox1->Text == "Медичні заклади") {

				this->textBox1->Text = "Лікарі";

			}
		}
	}
	public: bool BackToStartForm = false;
	private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackToStartForm = true;
		this->Close();
	}
};
}