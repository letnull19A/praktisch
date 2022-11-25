#pragma once

namespace WolkowIK3Z1 {

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
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::ListBox^ lst;
	private: System::Windows::Forms::ListBox^ lst2;
	protected:



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->lst = (gcnew System::Windows::Forms::ListBox());
			this->lst2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(350, 194);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"¬ыйти";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(177, 51);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(100, 20);
			this->txt->TabIndex = 2;
			// 
			// lst
			// 
			this->lst->FormattingEnabled = true;
			this->lst->Location = System::Drawing::Point(12, 12);
			this->lst->Name = L"lst";
			this->lst->Size = System::Drawing::Size(120, 95);
			this->lst->TabIndex = 3;
			this->lst->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::lst_SelectedIndexChanged);
			// 
			// lst2
			// 
			this->lst2->FormattingEnabled = true;
			this->lst2->Location = System::Drawing::Point(12, 113);
			this->lst2->Name = L"lst2";
			this->lst2->Size = System::Drawing::Size(120, 95);
			this->lst2->TabIndex = 4;
			this->lst2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::lst2_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 229);
			this->Controls->Add(this->lst2);
			this->Controls->Add(this->lst);
			this->Controls->Add(this->txt);
			this->Controls->Add(this->btnExit);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lst_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (lst->SelectedItem == "чЄрный")
			txt->BackColor = Color::Black;

		if (lst->SelectedItem == "красный")
			txt->BackColor = Color::Red;

		if (lst->SelectedItem == "синий")
			txt->BackColor = Color::Blue;

		if (lst->SelectedItem == "зелЄный")
			txt->BackColor = Color::Green;

		if (lst->SelectedItem == "караловый")
			txt->BackColor = Color::Coral;

		if (lst->SelectedItem == "аква")
			txt->BackColor = Color::Aqua;

		if (lst->SelectedItem == "аквамарин")
			txt->BackColor = Color::Aquamarine;

		if (lst->SelectedItem == "индиго")
			txt->BackColor = Color::Indigo;

		if (lst->SelectedItem == "тЄмнозелЄный")
			txt->BackColor = Color::DarkGreen;

		if (lst->SelectedItem == "тЄмнокрасный")
			txt->BackColor = Color::DarkRed;
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		lst->Items->Add("чЄрный");
		lst->Items->Add("красный");
		lst->Items->Add("синий");
		lst->Items->Add("зелЄный");
		lst->Items->Add("кораловый");
		lst->Items->Add("аква");
		lst->Items->Add("аквамарин");
		lst->Items->Add("индиго");
		lst->Items->Add("темнозелЄный");
		lst->Items->Add("тЄмнокрасный");
		
		lst2->Items->Add("минимальна€");
		lst2->Items->Add("средн€€");
		lst2->Items->Add("максимальна€");
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void lst2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->lst2->SelectedItem == "минимальна€")
			txt->Width = 20;
	
		if (this->lst2->SelectedItem == "средн€€")
			txt->Width = 50;
	
		if (this->lst2->SelectedItem == "максимальна€")
			txt->Width = 100;
	}
};
}
