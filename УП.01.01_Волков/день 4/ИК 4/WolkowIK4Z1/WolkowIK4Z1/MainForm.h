#pragma once
#include <cmath>
#include <time.h>

namespace WolkowIK4Z1 {

	using namespace ::std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtMin;
	protected:

	private: System::Windows::Forms::TextBox^ txtSeconds;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		int m_seconds = 0; 
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ timeLabel;
	private: System::Windows::Forms::Timer^ timer2;

		   int m_minutes = 0;
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtMin = (gcnew System::Windows::Forms::TextBox());
			this->txtSeconds = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// txtMin
			// 
			this->txtMin->Location = System::Drawing::Point(12, 23);
			this->txtMin->Name = L"txtMin";
			this->txtMin->Size = System::Drawing::Size(71, 20);
			this->txtMin->TabIndex = 1;
			this->txtMin->Text = L"0";
			// 
			// txtSeconds
			// 
			this->txtSeconds->Location = System::Drawing::Point(141, 24);
			this->txtSeconds->Name = L"txtSeconds";
			this->txtSeconds->Size = System::Drawing::Size(71, 20);
			this->txtSeconds->TabIndex = 2;
			this->txtSeconds->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"мин.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"сек.";
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"—брос";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->Location = System::Drawing::Point(12, 68);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(0, 13);
			this->timeLabel->TabIndex = 6;
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(260, 139);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtSeconds);
			this->Controls->Add(this->txtMin);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->Text = L"—екундомер";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		m_seconds = (m_seconds < 60) ? (m_seconds + 1) : 0;
		m_minutes += (int)(m_seconds / 60);
		
		txtSeconds->Text = m_seconds.ToString();
		txtMin->Text = m_minutes.ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Enabled = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Enabled = false;

		this->txtMin->Text = "0";
		this->txtSeconds->Text = "0";
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		struct tm* loc;
		time_t t;

		t = time(NULL);
		loc = localtime(&t);
		this->timeLabel->Text = (loc->tm_mday).ToString() 
			+ " " + (loc->tm_mon + 1).ToString()
			+ " " + (loc->tm_year + 1900).ToString()
			+ " " + (loc->tm_hour).ToString()
			+ " " + ((loc->tm_min < 10) ? "0" : "") + (loc->tm_min).ToString();
	}
};
}
