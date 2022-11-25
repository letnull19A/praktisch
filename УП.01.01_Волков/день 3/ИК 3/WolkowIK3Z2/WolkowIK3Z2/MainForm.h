#pragma once

namespace WolkowIK3Z2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôèîëåòîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ æ¸ëòûéToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ñèíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåë¸íûéToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ txt;
	private: System::Windows::Forms::ToolStripMenuItem^ øèğèíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìèíèìàëüíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñğåäíÿÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìàêñèìàëüíàÿToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->öâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôèîëåòîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æ¸ëòûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåë¸íûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->øèğèíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìèíèìàëüíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñğåäíÿÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìàêñèìàëüíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòToolStripMenuItem,
					this->øèğèíàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(477, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// öâåòToolStripMenuItem
			// 
			this->öâåòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôèîëåòîâûéToolStripMenuItem,
					this->æ¸ëòûéToolStripMenuItem, this->ñèíèéToolStripMenuItem, this->çåë¸íûéToolStripMenuItem
			});
			this->öâåòToolStripMenuItem->Name = L"öâåòToolStripMenuItem";
			this->öâåòToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->öâåòToolStripMenuItem->Text = L"Öâåò";
			// 
			// ôèîëåòîâûéToolStripMenuItem
			// 
			this->ôèîëåòîâûéToolStripMenuItem->Name = L"ôèîëåòîâûéToolStripMenuItem";
			this->ôèîëåòîâûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ôèîëåòîâûéToolStripMenuItem->Text = L"Ôèîëåèòîâûé";
			this->ôèîëåòîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ôèîëåòîâûéToolStripMenuItem_Click);
			// 
			// æ¸ëòûéToolStripMenuItem
			// 
			this->æ¸ëòûéToolStripMenuItem->Name = L"æ¸ëòûéToolStripMenuItem";
			this->æ¸ëòûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->æ¸ëòûéToolStripMenuItem->Text = L"Æ¸ëòûé";
			this->æ¸ëòûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::æ¸ëòûéToolStripMenuItem_Click);
			// 
			// ñèíèéToolStripMenuItem
			// 
			this->ñèíèéToolStripMenuItem->Name = L"ñèíèéToolStripMenuItem";
			this->ñèíèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñèíèéToolStripMenuItem->Text = L"Ñèíèé";
			this->ñèíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñèíèéToolStripMenuItem_Click);
			// 
			// çåë¸íûéToolStripMenuItem
			// 
			this->çåë¸íûéToolStripMenuItem->Name = L"çåë¸íûéToolStripMenuItem";
			this->çåë¸íûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çåë¸íûéToolStripMenuItem->Text = L"Çåë¸íûé";
			this->çåë¸íûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::çåë¸íûéToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// txt
			// 
			this->txt->Location = System::Drawing::Point(136, 198);
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(200, 20);
			this->txt->TabIndex = 2;
			// 
			// øèğèíàToolStripMenuItem
			// 
			this->øèğèíàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ìèíèìàëüíàÿToolStripMenuItem,
					this->ñğåäíÿÿToolStripMenuItem, this->ìàêñèìàëüíàÿToolStripMenuItem
			});
			this->øèğèíàToolStripMenuItem->Name = L"øèğèíàToolStripMenuItem";
			this->øèğèíàToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->øèğèíàToolStripMenuItem->Text = L"Øèğèíà";
			// 
			// ìèíèìàëüíàÿToolStripMenuItem
			// 
			this->ìèíèìàëüíàÿToolStripMenuItem->Name = L"ìèíèìàëüíàÿToolStripMenuItem";
			this->ìèíèìàëüíàÿToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ìèíèìàëüíàÿToolStripMenuItem->Text = L"Ìèíèìàëüíàÿ";
			this->ìèíèìàëüíàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ìèíèìàëüíàÿToolStripMenuItem_Click);
			// 
			// ñğåäíÿÿToolStripMenuItem
			// 
			this->ñğåäíÿÿToolStripMenuItem->Name = L"ñğåäíÿÿToolStripMenuItem";
			this->ñğåäíÿÿToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñğåäíÿÿToolStripMenuItem->Text = L"Ñğåäíÿÿ";
			this->ñğåäíÿÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñğåäíÿÿToolStripMenuItem_Click);
			// 
			// ìàêñèìàëüíàÿToolStripMenuItem
			// 
			this->ìàêñèìàëüíàÿToolStripMenuItem->Name = L"ìàêñèìàëüíàÿToolStripMenuItem";
			this->ìàêñèìàëüíàÿToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ìàêñèìàëüíàÿToolStripMenuItem->Text = L"Ìàêñèìàëüíàÿ";
			this->ìàêñèìàëüíàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ìàêñèìàëüíàÿToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 261);
			this->Controls->Add(this->txt);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void ôèîëåòîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->BackColor = Color::Purple;
	ôèîëåòîâûéToolStripMenuItem->Enabled = false;
}
private: System::Void æ¸ëòûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->BackColor = Color::Yellow;
	æ¸ëòûéToolStripMenuItem->Enabled = false;
}
private: System::Void ñèíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->BackColor = Color::Blue;
	ñèíèéToolStripMenuItem->Enabled = false;
}
private: System::Void çåë¸íûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->BackColor = Color::LightGreen;
	çåë¸íûéToolStripMenuItem->Enabled = false;
}
private: System::Void ìèíèìàëüíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->Width = 20;
	ìèíèìàëüíàÿToolStripMenuItem->Enabled = false;
}
private: System::Void ñğåäíÿÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->Width = 50;
	ñğåäíÿÿToolStripMenuItem->Enabled = false;
}
private: System::Void ìàêñèìàëüíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txt->Width = 100;
	ìàêñèìàëüíàÿToolStripMenuItem->Enabled = false;
}
};
}
