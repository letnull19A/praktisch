#pragma once

namespace WolkowIK5Z2 {

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
	private: System::Windows::Forms::PictureBox^ pct;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ file1;
	private: System::Windows::Forms::TextBox^ txtFile;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SaveFileDialog^ save1;
	private: System::Windows::Forms::Button^ button2;


	protected:

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
			this->pct = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->file1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtFile = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->save1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct))->BeginInit();
			this->SuspendLayout();
			// 
			// pct
			// 
			this->pct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pct->Location = System::Drawing::Point(12, 92);
			this->pct->Name = L"pct";
			this->pct->Size = System::Drawing::Size(260, 212);
			this->pct->TabIndex = 0;
			this->pct->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Загрузить рисунок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// file1
			// 
			this->file1->FileName = L"openFileDialog1";
			// 
			// txtFile
			// 
			this->txtFile->Location = System::Drawing::Point(12, 25);
			this->txtFile->Name = L"txtFile";
			this->txtFile->Size = System::Drawing::Size(260, 20);
			this->txtFile->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Полное имя графического файла";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(148, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 316);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtFile);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pct);
			this->Name = L"MainForm";
			this->Text = L"PictureBox Expr";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		file1->Filter = "(*.jpg)|*.jpg";

		String^ fname;
		fname = txtFile->Text;

		pct->Image = Image::FromFile(fname);
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// noop
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		save1->Filter = "(*.jpg)|*.jpg";
		save1->FilterIndex = 1;
		save1->RestoreDirectory = true;

		bool l1 = save1->ShowDialog() == System::Windows::Forms::DialogResult::OK;
		bool l2 = save1->FileName->Length > 0;

		if (l1 && l2) {
			pct->Image->Save(save1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
		}
	}
};
}
