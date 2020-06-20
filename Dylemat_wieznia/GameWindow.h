#pragma once
#include <typeinfo>
#include <iostream>
#include "Game.h"
#include "User.h"
#include "BasicBot.h"
#include "Player.h"
#include <string>
#include <cstdlib>


namespace Dylematwieznia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::Text;

	/// <summary>
	/// Podsumowanie informacji o GameWindow
	/// </summary>
	public ref class GameWindow : public System::Windows::Forms::Form
	{
		
	private:
		String^ nick;

	private: System::Windows::Forms::PictureBox^ Picture;

	private: System::Windows::Forms::Label^ label3;
		   String^ iter;
	public:
		GameWindow(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		GameWindow(String ^n,String ^i)
		{
			InitializeComponent();
			nick = n;
			iter = i;
		}
		
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~GameWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Button^ Nie;
	protected:









	private: System::Windows::Forms::Button^ Tak;
	private: System::Windows::Forms::ListBox^ Players;
	private: System::Windows::Forms::ListBox^ Points;







	private: System::Windows::Forms::Label^ bot;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{










			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameWindow::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->Points = (gcnew System::Windows::Forms::ListBox());
			this->Players = (gcnew System::Windows::Forms::ListBox());
			this->Picture = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bot = (gcnew System::Windows::Forms::Label());
			this->Nie = (gcnew System::Windows::Forms::Button());
			this->Tak = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->splitContainer1->Panel1->Controls->Add(this->Points);
			this->splitContainer1->Panel1->Controls->Add(this->Players);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->splitContainer1->Panel2->Controls->Add(this->Picture);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->bot);
			this->splitContainer1->Panel2->Controls->Add(this->Nie);
			this->splitContainer1->Panel2->Controls->Add(this->Tak);
			this->splitContainer1->Size = System::Drawing::Size(1404, 791);
			this->splitContainer1->SplitterDistance = 292;
			this->splitContainer1->TabIndex = 0;
			// 
			// Points
			// 
			this->Points->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->Points->Dock = System::Windows::Forms::DockStyle::Left;
			this->Points->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Points->FormattingEnabled = true;
			this->Points->ItemHeight = 21;
			this->Points->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Punkty:" });
			this->Points->Location = System::Drawing::Point(189, 0);
			this->Points->Name = L"Points";
			this->Points->Size = System::Drawing::Size(100, 791);
			this->Points->TabIndex = 10;
			// 
			// Players
			// 
			this->Players->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->Players->Dock = System::Windows::Forms::DockStyle::Left;
			this->Players->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Players->FormattingEnabled = true;
			this->Players->ItemHeight = 21;
			this->Players->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Gracze:" });
			this->Players->Location = System::Drawing::Point(0, 0);
			this->Players->Name = L"Players";
			this->Players->Size = System::Drawing::Size(189, 791);
			this->Players->TabIndex = 9;
			// 
			// Picture
			// 
			this->Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Picture->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Picture.Image")));
			this->Picture->Location = System::Drawing::Point(297, 3);
			this->Picture->Name = L"Picture";
			this->Picture->Size = System::Drawing::Size(534, 249);
			this->Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Picture->TabIndex = 7;
			this->Picture->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(380, 501);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(361, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Czy zdradzasz swojego przeciwnika\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Yellow;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(593, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 39);
			this->label2->TabIndex = 5;
			this->label2->Text = L"NR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(454, 294);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 35);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Runda #";
			// 
			// bot
			// 
			this->bot->AutoSize = true;
			this->bot->Font = (gcnew System::Drawing::Font(L"Arial Black", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bot->Location = System::Drawing::Point(451, 382);
			this->bot->Name = L"bot";
			this->bot->Size = System::Drawing::Size(222, 52);
			this->bot->TabIndex = 3;
			this->bot->Text = L"Nick Bota";
			this->bot->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Nie
			// 
			this->Nie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Nie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Nie->Location = System::Drawing::Point(733, 563);
			this->Nie->Name = L"Nie";
			this->Nie->Size = System::Drawing::Size(200, 100);
			this->Nie->TabIndex = 2;
			this->Nie->Text = L"Nie zdradzam";
			this->Nie->UseVisualStyleBackColor = false;
			this->Nie->Click += gcnew System::EventHandler(this, &GameWindow::Nie_Click);
			// 
			// Tak
			// 
			this->Tak->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Tak->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Tak->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Tak->Location = System::Drawing::Point(209, 563);
			this->Tak->Name = L"Tak";
			this->Tak->Size = System::Drawing::Size(200, 100);
			this->Tak->TabIndex = 1;
			this->Tak->Text = L"Zdradzam";
			this->Tak->UseVisualStyleBackColor = false;
			this->Tak->Click += gcnew System::EventHandler(this, &GameWindow::Tak_Click);
			// 
			// GameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1404, 791);
			this->Controls->Add(this->splitContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GameWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameWindow";
			this->Load += gcnew System::EventHandler(this, &GameWindow::GameWindow_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
		
	public: System::Void GameWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		
		int i = Int32::Parse(iter);
		User user1;
		Game game;
		BasicBot bot1;
		BasicBot bot2;
		BasicBot bot3;
		game.setRounds(3);
		game.addPlayer(&user1);
		game.addPlayer(&bot1);
		game.addPlayer(&bot2);
		game.addPlayer(&bot3);
		user1.setName("test");
		
		game.run();
		game.startRound();


		MessageBox::Show("test");
		
	}
	
		  
private: System::Void Tak_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Controls->Clear();
	Visible = false;
	InitializeComponent();
	GameWindow_Load(e, e);
	Visible = true;
	
}

	    
private: System::Void Nie_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
