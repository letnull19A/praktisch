#pragma once

#include <cmath>

namespace WolkowIK2Z1 {

	using namespace ::std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для frmSumma
	/// </summary>
	public ref class frmSumma : public System::Windows::Forms::Form
	{
	public:
		frmSumma(void)
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
		~frmSumma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textA;
	private: System::Windows::Forms::TextBox^ summa;


	private: System::Windows::Forms::TextBox^ textC;

	private: System::Windows::Forms::TextBox^ textB;
	private: System::Windows::Forms::TextBox^ textBB;
	private: System::Windows::Forms::TextBox^ textCC;
	private: System::Windows::Forms::TextBox^ textDD;



	private: System::Windows::Forms::TextBox^ textAA;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBBB;
	private: System::Windows::Forms::TextBox^ textCCC;
	private: System::Windows::Forms::TextBox^ textDDD;



	private: System::Windows::Forms::TextBox^ textAAA;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBBBB;

	private: System::Windows::Forms::TextBox^ textDDDD;



	private: System::Windows::Forms::TextBox^ textAAAA;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBBBBB;
	private: System::Windows::Forms::TextBox^ textCCCCC;
	private: System::Windows::Forms::TextBox^ textDDDDD;



	private: System::Windows::Forms::TextBox^ textAAAAA;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBBBBBB;

	private: System::Windows::Forms::TextBox^ textDDDDDD;



	private: System::Windows::Forms::TextBox^ textAAAAAA;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textA = (gcnew System::Windows::Forms::TextBox());
			this->summa = (gcnew System::Windows::Forms::TextBox());
			this->textC = (gcnew System::Windows::Forms::TextBox());
			this->textB = (gcnew System::Windows::Forms::TextBox());
			this->textBB = (gcnew System::Windows::Forms::TextBox());
			this->textCC = (gcnew System::Windows::Forms::TextBox());
			this->textDD = (gcnew System::Windows::Forms::TextBox());
			this->textAA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBBB = (gcnew System::Windows::Forms::TextBox());
			this->textCCC = (gcnew System::Windows::Forms::TextBox());
			this->textDDD = (gcnew System::Windows::Forms::TextBox());
			this->textAAA = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBBBB = (gcnew System::Windows::Forms::TextBox());
			this->textDDDD = (gcnew System::Windows::Forms::TextBox());
			this->textAAAA = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBBBBB = (gcnew System::Windows::Forms::TextBox());
			this->textCCCCC = (gcnew System::Windows::Forms::TextBox());
			this->textDDDDD = (gcnew System::Windows::Forms::TextBox());
			this->textAAAAA = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBBBBBB = (gcnew System::Windows::Forms::TextBox());
			this->textDDDDDD = (gcnew System::Windows::Forms::TextBox());
			this->textAAAAAA = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(443, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmSumma::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmSumma::button2_Click);
			// 
			// textA
			// 
			this->textA->Location = System::Drawing::Point(38, 30);
			this->textA->Name = L"textA";
			this->textA->Size = System::Drawing::Size(100, 20);
			this->textA->TabIndex = 2;
			this->textA->Text = L"0";
			// 
			// summa
			// 
			this->summa->Location = System::Drawing::Point(420, 30);
			this->summa->Name = L"summa";
			this->summa->ReadOnly = true;
			this->summa->Size = System::Drawing::Size(100, 20);
			this->summa->TabIndex = 3;
			// 
			// textC
			// 
			this->textC->Location = System::Drawing::Point(287, 30);
			this->textC->Name = L"textC";
			this->textC->Size = System::Drawing::Size(100, 20);
			this->textC->TabIndex = 4;
			this->textC->Text = L"0";
			// 
			// textB
			// 
			this->textB->Location = System::Drawing::Point(162, 30);
			this->textB->Name = L"textB";
			this->textB->Size = System::Drawing::Size(100, 20);
			this->textB->TabIndex = 5;
			this->textB->Text = L"0";
			// 
			// textBB
			// 
			this->textBB->Location = System::Drawing::Point(162, 72);
			this->textBB->Name = L"textBB";
			this->textBB->Size = System::Drawing::Size(100, 20);
			this->textBB->TabIndex = 9;
			this->textBB->Text = L"0";
			// 
			// textCC
			// 
			this->textCC->Location = System::Drawing::Point(287, 72);
			this->textCC->Name = L"textCC";
			this->textCC->Size = System::Drawing::Size(100, 20);
			this->textCC->TabIndex = 8;
			this->textCC->Text = L"0";
			// 
			// textDD
			// 
			this->textDD->Location = System::Drawing::Point(420, 72);
			this->textDD->Name = L"textDD";
			this->textDD->ReadOnly = true;
			this->textDD->Size = System::Drawing::Size(100, 20);
			this->textDD->TabIndex = 7;
			// 
			// textAA
			// 
			this->textAA->Location = System::Drawing::Point(38, 72);
			this->textAA->Name = L"textAA";
			this->textAA->Size = System::Drawing::Size(100, 20);
			this->textAA->TabIndex = 6;
			this->textAA->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Сумма трёх чисел";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Сумма квадратов трёх чисел";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"площадь треугольника по трем сторонам";
			// 
			// textBBB
			// 
			this->textBBB->Location = System::Drawing::Point(162, 115);
			this->textBBB->Name = L"textBBB";
			this->textBBB->Size = System::Drawing::Size(100, 20);
			this->textBBB->TabIndex = 15;
			this->textBBB->Text = L"0";
			// 
			// textCCC
			// 
			this->textCCC->Location = System::Drawing::Point(287, 115);
			this->textCCC->Name = L"textCCC";
			this->textCCC->Size = System::Drawing::Size(100, 20);
			this->textCCC->TabIndex = 14;
			this->textCCC->Text = L"0";
			// 
			// textDDD
			// 
			this->textDDD->Location = System::Drawing::Point(420, 115);
			this->textDDD->Name = L"textDDD";
			this->textDDD->ReadOnly = true;
			this->textDDD->Size = System::Drawing::Size(100, 20);
			this->textDDD->TabIndex = 13;
			// 
			// textAAA
			// 
			this->textAAA->Location = System::Drawing::Point(38, 115);
			this->textAAA->Name = L"textAAA";
			this->textAAA->Size = System::Drawing::Size(100, 20);
			this->textAAA->TabIndex = 12;
			this->textAAA->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"площадь прямоугольника по двум сторонам";
			// 
			// textBBBB
			// 
			this->textBBBB->Location = System::Drawing::Point(162, 161);
			this->textBBBB->Name = L"textBBBB";
			this->textBBBB->Size = System::Drawing::Size(100, 20);
			this->textBBBB->TabIndex = 20;
			this->textBBBB->Text = L"0";
			// 
			// textDDDD
			// 
			this->textDDDD->Location = System::Drawing::Point(420, 161);
			this->textDDDD->Name = L"textDDDD";
			this->textDDDD->ReadOnly = true;
			this->textDDDD->Size = System::Drawing::Size(100, 20);
			this->textDDDD->TabIndex = 18;
			// 
			// textAAAA
			// 
			this->textAAAA->Location = System::Drawing::Point(38, 161);
			this->textAAAA->Name = L"textAAAA";
			this->textAAAA->Size = System::Drawing::Size(100, 20);
			this->textAAAA->TabIndex = 17;
			this->textAAAA->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(317, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"площадь треугольника по двум сторонам и углу между ними";
			// 
			// textBBBBB
			// 
			this->textBBBBB->Location = System::Drawing::Point(162, 208);
			this->textBBBBB->Name = L"textBBBBB";
			this->textBBBBB->Size = System::Drawing::Size(100, 20);
			this->textBBBBB->TabIndex = 25;
			this->textBBBBB->Text = L"0";
			// 
			// textCCCCC
			// 
			this->textCCCCC->Location = System::Drawing::Point(287, 208);
			this->textCCCCC->Name = L"textCCCCC";
			this->textCCCCC->Size = System::Drawing::Size(100, 20);
			this->textCCCCC->TabIndex = 24;
			this->textCCCCC->Text = L"0";
			// 
			// textDDDDD
			// 
			this->textDDDDD->Location = System::Drawing::Point(420, 208);
			this->textDDDDD->Name = L"textDDDDD";
			this->textDDDDD->ReadOnly = true;
			this->textDDDDD->Size = System::Drawing::Size(100, 20);
			this->textDDDDD->TabIndex = 23;
			// 
			// textAAAAA
			// 
			this->textAAAAA->Location = System::Drawing::Point(38, 208);
			this->textAAAAA->Name = L"textAAAAA";
			this->textAAAAA->Size = System::Drawing::Size(100, 20);
			this->textAAAAA->TabIndex = 22;
			this->textAAAAA->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"процент от числа";
			// 
			// textBBBBBB
			// 
			this->textBBBBBB->Location = System::Drawing::Point(162, 255);
			this->textBBBBBB->Name = L"textBBBBBB";
			this->textBBBBBB->Size = System::Drawing::Size(100, 20);
			this->textBBBBBB->TabIndex = 30;
			this->textBBBBBB->Text = L"0";
			// 
			// textDDDDDD
			// 
			this->textDDDDDD->Location = System::Drawing::Point(420, 255);
			this->textDDDDDD->Name = L"textDDDDDD";
			this->textDDDDDD->ReadOnly = true;
			this->textDDDDDD->Size = System::Drawing::Size(100, 20);
			this->textDDDDDD->TabIndex = 28;
			// 
			// textAAAAAA
			// 
			this->textAAAAAA->Location = System::Drawing::Point(38, 255);
			this->textAAAAAA->Name = L"textAAAAAA";
			this->textAAAAAA->Size = System::Drawing::Size(100, 20);
			this->textAAAAAA->TabIndex = 27;
			this->textAAAAAA->Text = L"0";
			// 
			// frmSumma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 337);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBBBBBB);
			this->Controls->Add(this->textDDDDDD);
			this->Controls->Add(this->textAAAAAA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBBBBB);
			this->Controls->Add(this->textCCCCC);
			this->Controls->Add(this->textDDDDD);
			this->Controls->Add(this->textAAAAA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBBBB);
			this->Controls->Add(this->textDDDD);
			this->Controls->Add(this->textAAAA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBBB);
			this->Controls->Add(this->textCCC);
			this->Controls->Add(this->textDDD);
			this->Controls->Add(this->textAAA);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBB);
			this->Controls->Add(this->textCC);
			this->Controls->Add(this->textDD);
			this->Controls->Add(this->textAA);
			this->Controls->Add(this->textB);
			this->Controls->Add(this->textC);
			this->Controls->Add(this->summa);
			this->Controls->Add(this->textA);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmSumma";
			this->Text = L"Вычисления";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int summa = Int32::Parse(this->textA->Text) + Int32::Parse(this->textB->Text) + Int32::Parse(this->textC->Text);

	this->summa->Text = summa.ToString();

	int sumPow = pow(Int32::Parse(this->textAA->Text), 2) +
		pow(Int32::Parse(this->textBB->Text), 2) +
		pow(Int32::Parse(this->textCC->Text), 2);

	this->textDD->Text = sumPow.ToString();

	double areaTri2 = sqrt((Int32::Parse(textAAA->Text) + Int32::Parse(textBBB->Text) + Int32::Parse(textCCC->Text)) / 2);

	textDDD->Text = areaTri2.ToString();

	double props = Int32::Parse(textAAAAAA->Text) * 0.01  * Int32::Parse(textBBBBBB->Text);

	textDDDDDD->Text = props.ToString();

	double areaSq = (Int32::Parse(textAAAA->Text) * Int32::Parse(textBBBB->Text));

	textDDDD->Text = areaSq.ToString();

	double areaTri1 = 0.5 * Int32::Parse(textAAAAA->Text) *
		Int32::Parse(textBBBBB->Text) * sin(Int32::Parse(textCCCCC->Text));

	this->textDDDDD->Text = areaTri1.ToString();

	}
};
}
