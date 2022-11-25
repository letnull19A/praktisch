#pragma once

namespace WolkowIK3Z1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->btnExit->Text = L"�����";
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
		if (lst->SelectedItem == "������")
			txt->BackColor = Color::Black;

		if (lst->SelectedItem == "�������")
			txt->BackColor = Color::Red;

		if (lst->SelectedItem == "�����")
			txt->BackColor = Color::Blue;

		if (lst->SelectedItem == "������")
			txt->BackColor = Color::Green;

		if (lst->SelectedItem == "���������")
			txt->BackColor = Color::Coral;

		if (lst->SelectedItem == "����")
			txt->BackColor = Color::Aqua;

		if (lst->SelectedItem == "���������")
			txt->BackColor = Color::Aquamarine;

		if (lst->SelectedItem == "������")
			txt->BackColor = Color::Indigo;

		if (lst->SelectedItem == "����������")
			txt->BackColor = Color::DarkGreen;

		if (lst->SelectedItem == "�����������")
			txt->BackColor = Color::DarkRed;
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		lst->Items->Add("������");
		lst->Items->Add("�������");
		lst->Items->Add("�����");
		lst->Items->Add("������");
		lst->Items->Add("���������");
		lst->Items->Add("����");
		lst->Items->Add("���������");
		lst->Items->Add("������");
		lst->Items->Add("�����������");
		lst->Items->Add("�����������");
		
		lst2->Items->Add("�����������");
		lst2->Items->Add("�������");
		lst2->Items->Add("������������");
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void lst2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->lst2->SelectedItem == "�����������")
			txt->Width = 20;
	
		if (this->lst2->SelectedItem == "�������")
			txt->Width = 50;
	
		if (this->lst2->SelectedItem == "������������")
			txt->Width = 100;
	}
};
}
