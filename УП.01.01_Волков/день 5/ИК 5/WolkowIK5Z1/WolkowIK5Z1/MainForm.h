#pragma once
#include <string>
#include <vector>

namespace WolkowIK5Z1 {

	using namespace ::std;
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
	private: System::Windows::Forms::ListBox^ lstMenu;
	private: System::Windows::Forms::ListBox^ lstOrder;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnMakeOrder;
	private: System::Windows::Forms::Button^ btnAddOrder;
	private: System::Windows::Forms::Button^ btnRemoveOrder;


	private: System::Windows::Forms::Button^ btnRemoveAll;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelPrice;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::TextBox^ txtNewName;


	private: System::Windows::Forms::TextBox^ txtNewPrice;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		// vector<Product> *_products;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lstMenu = (gcnew System::Windows::Forms::ListBox());
			this->lstOrder = (gcnew System::Windows::Forms::ListBox());
			this->btnMakeOrder = (gcnew System::Windows::Forms::Button());
			this->btnAddOrder = (gcnew System::Windows::Forms::Button());
			this->btnRemoveOrder = (gcnew System::Windows::Forms::Button());
			this->btnRemoveAll = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->txtNewName = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPrice = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// lstMenu
			// 
			this->lstMenu->FormattingEnabled = true;
			this->lstMenu->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Гусь жаренный - 10", L"Мундиры - 20", L"Цветная капуста - 34",
					L"Чёрно-белая капуста - 12", L"Компот - 78", L"Сухари сушённые - 190", L"Глазунья - 5", L"Яблоки - 4000", L"Груши - 34", L"Йогурт - 13"
			});
			this->lstMenu->Location = System::Drawing::Point(3, 36);
			this->lstMenu->Name = L"lstMenu";
			this->lstMenu->Size = System::Drawing::Size(174, 134);
			this->lstMenu->TabIndex = 0;
			// 
			// lstOrder
			// 
			this->lstOrder->FormattingEnabled = true;
			this->lstOrder->Location = System::Drawing::Point(3, 36);
			this->lstOrder->Name = L"lstOrder";
			this->lstOrder->Size = System::Drawing::Size(166, 277);
			this->lstOrder->TabIndex = 1;
			// 
			// btnMakeOrder
			// 
			this->btnMakeOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnMakeOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMakeOrder->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnMakeOrder->Location = System::Drawing::Point(0, 3);
			this->btnMakeOrder->Name = L"btnMakeOrder";
			this->btnMakeOrder->Size = System::Drawing::Size(129, 42);
			this->btnMakeOrder->TabIndex = 2;
			this->btnMakeOrder->Text = L"Заказать";
			this->btnMakeOrder->UseVisualStyleBackColor = false;
			this->btnMakeOrder->Click += gcnew System::EventHandler(this, &MainForm::btnMakeOrder_Click);
			// 
			// btnAddOrder
			// 
			this->btnAddOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnAddOrder->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnAddOrder->Location = System::Drawing::Point(3, 183);
			this->btnAddOrder->Name = L"btnAddOrder";
			this->btnAddOrder->Size = System::Drawing::Size(174, 23);
			this->btnAddOrder->TabIndex = 3;
			this->btnAddOrder->Text = L"Добавить в список";
			this->btnAddOrder->UseVisualStyleBackColor = false;
			this->btnAddOrder->Click += gcnew System::EventHandler(this, &MainForm::btnAdd_Click);
			// 
			// btnRemoveOrder
			// 
			this->btnRemoveOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnRemoveOrder->ForeColor = System::Drawing::Color::DarkRed;
			this->btnRemoveOrder->Location = System::Drawing::Point(3, 319);
			this->btnRemoveOrder->Name = L"btnRemoveOrder";
			this->btnRemoveOrder->Size = System::Drawing::Size(166, 23);
			this->btnRemoveOrder->TabIndex = 4;
			this->btnRemoveOrder->Text = L"Удалить";
			this->btnRemoveOrder->UseVisualStyleBackColor = false;
			this->btnRemoveOrder->Click += gcnew System::EventHandler(this, &MainForm::btnRemove_Click);
			// 
			// btnRemoveAll
			// 
			this->btnRemoveAll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnRemoveAll->ForeColor = System::Drawing::Color::DarkRed;
			this->btnRemoveAll->Location = System::Drawing::Point(3, 348);
			this->btnRemoveAll->Name = L"btnRemoveAll";
			this->btnRemoveAll->Size = System::Drawing::Size(166, 23);
			this->btnRemoveAll->TabIndex = 5;
			this->btnRemoveAll->Text = L"Убрать всё";
			this->btnRemoveAll->UseVisualStyleBackColor = false;
			this->btnRemoveAll->Click += gcnew System::EventHandler(this, &MainForm::btnRemoveAll_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-1, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Итоговая стоимость:";
			// 
			// labelPrice
			// 
			this->labelPrice->AutoSize = true;
			this->labelPrice->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->labelPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice->ForeColor = System::Drawing::Color::DarkGreen;
			this->labelPrice->Location = System::Drawing::Point(194, 5);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(19, 20);
			this->labelPrice->TabIndex = 7;
			this->labelPrice->Text = L"0";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->labelPrice);
			this->panel1->Location = System::Drawing::Point(7, 392);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(355, 25);
			this->panel1->TabIndex = 8;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::Color::DarkRed;
			this->btnExit->Location = System::Drawing::Point(272, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 42);
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = L"Выход";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Название блюда";
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnAddProduct->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnAddProduct->Location = System::Drawing::Point(3, 133);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(174, 23);
			this->btnAddProduct->TabIndex = 11;
			this->btnAddProduct->Text = L"Добавить";
			this->btnAddProduct->UseVisualStyleBackColor = false;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &MainForm::btnAddProduct_Click);
			// 
			// txtNewName
			// 
			this->txtNewName->Location = System::Drawing::Point(3, 55);
			this->txtNewName->Name = L"txtNewName";
			this->txtNewName->Size = System::Drawing::Size(174, 20);
			this->txtNewName->TabIndex = 12;
			// 
			// txtNewPrice
			// 
			this->txtNewPrice->Location = System::Drawing::Point(3, 100);
			this->txtNewPrice->Name = L"txtNewPrice";
			this->txtNewPrice->Size = System::Drawing::Size(174, 20);
			this->txtNewPrice->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Цена";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->txtNewName);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->txtNewPrice);
			this->panel2->Controls->Add(this->btnAddProduct);
			this->panel2->Location = System::Drawing::Point(7, 227);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(180, 159);
			this->panel2->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Добавление продукции";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->btnMakeOrder);
			this->panel3->Controls->Add(this->btnExit);
			this->panel3->Location = System::Drawing::Point(7, 423);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(355, 48);
			this->panel3->TabIndex = 16;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->lstOrder);
			this->panel4->Controls->Add(this->btnRemoveOrder);
			this->panel4->Controls->Add(this->btnRemoveAll);
			this->panel4->Location = System::Drawing::Point(190, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(172, 374);
			this->panel4->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(29, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Готовый список";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->lstMenu);
			this->panel5->Controls->Add(this->btnAddOrder);
			this->panel5->Location = System::Drawing::Point(7, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(180, 209);
			this->panel5->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(22, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Список продукции";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(374, 483);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ресторан \"Студент\"";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		lstOrder->Items->Add(lstMenu->Text);

		labelPrice->Text = (Double::Parse(labelPrice->Text) + LineToDouble(lstMenu->Text))
			.ToString();
	}

	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
		labelPrice->Text = (Double::Parse(labelPrice->Text) - LineToDouble(lstOrder->Text))
			.ToString();

		lstOrder->Items->Remove(lstOrder->SelectedItem);
	}

	private: System::Void btnMakeOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(
			"Приятного аппетита\nСумма заказа: " + Double::Parse(labelPrice->Text) + "руб.",
			"Ресторан Студент",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}

	private: System::Void btnRemoveAll_Click(System::Object^ sender, System::EventArgs^ e) {
		lstOrder->Items->Clear();
		labelPrice->Text = "0 руб.";
	}

	private: double LineToDouble(String^ line) {

		char s[11] = { '\.', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

		String ^_tmp;

		for (int i = 0; i < line->Length; i++) {
			for (int j = 0; j < 11; j++) {
				if (line[i] == s[j]) {
					_tmp = _tmp + line[i];
				}
			}
		}

		return Convert::ToDouble(
			_tmp, 
			System::Globalization::CultureInfo::GetCultureInfo("en-US"));
	}

	private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lstMenu->Items->Add(txtNewName->Text + " - " + txtNewPrice->Text);

		txtNewName->Clear();
		txtNewPrice->Clear();
	}

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
