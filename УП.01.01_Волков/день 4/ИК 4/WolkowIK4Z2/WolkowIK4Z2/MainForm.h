#pragma once

namespace WolkowIK4Z2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnExit;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnStart;


	private: System::Windows::Forms::PictureBox^ pct;
	private: System::Windows::Forms::Timer^ tmr;
	private: System::Windows::Forms::PictureBox^ pct2;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->pct = (gcnew System::Windows::Forms::PictureBox());
			this->tmr = (gcnew System::Windows::Forms::Timer(this->components));
			this->pct2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(471, 371);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"Выход";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(354, 371);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 2;
			this->btnStart->Text = L"Старт";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MainForm::btnStart_Click);
			// 
			// pct
			// 
			this->pct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pct.BackgroundImage")));
			this->pct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pct->Location = System::Drawing::Point(12, 12);
			this->pct->Name = L"pct";
			this->pct->Size = System::Drawing::Size(124, 143);
			this->pct->TabIndex = 3;
			this->pct->TabStop = false;
			// 
			// tmr
			// 
			this->tmr->Interval = 1000;
			this->tmr->Tick += gcnew System::EventHandler(this, &MainForm::tmr_Tick);
			// 
			// pct2
			// 
			this->pct2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pct2.BackgroundImage")));
			this->pct2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pct2->Location = System::Drawing::Point(422, 205);
			this->pct2->Name = L"pct2";
			this->pct2->Size = System::Drawing::Size(124, 143);
			this->pct2->TabIndex = 4;
			this->pct2->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 406);
			this->Controls->Add(this->pct2);
			this->Controls->Add(this->pct);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnExit);
			this->Name = L"MainForm";
			this->Text = L"Анимация";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tmr_Tick(System::Object^ sender, System::EventArgs^ e) {
		pct->Left = pct->Left + 20;
		pct2->Left = pct2->Left - 20;
	}
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		tmr->Enabled = !tmr->Enabled;
		btnStart->Text = (tmr->Enabled) ? "Стоп" : "Старт";
		tmr->Interval = 50;
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
