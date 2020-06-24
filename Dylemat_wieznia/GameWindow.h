
#pragma once
#include <typeinfo>
#include <iostream>
#include "Game.h"
#include "User.h"
#include "BasicBot.h"
#include "Player.h"
#include "Decision.h"

#include <cstdlib>
#include <msclr/marshal_cppstd.h>
#include <string.h>
#include <stdlib.h>


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
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::PictureBox^ Picture;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::SplitContainer^ splitContainer1;
		System::Windows::Forms::Button^ Nie;
		System::Windows::Forms::Button^ Tak;
		System::Windows::Forms::ListBox^ Players;
		System::Windows::Forms::ListBox^ Points;
		System::Windows::Forms::Label^ bot;
		System::Windows::Forms::Label^ Rounds;

		System::Void Tak_Click(System::Object^ sender, System::EventArgs^ e) {
			yes();
			Update();
		}

		System::Void Nie_Click(System::Object^ sender, System::EventArgs^ e) {
			no();
			Update();
		}

		void beginGame(std::string nick, int rounds);
		void Update();
		void yes();
		void no();


		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameWindow::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->Points = (gcnew System::Windows::Forms::ListBox());
			this->Players = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Rounds = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bot = (gcnew System::Windows::Forms::Label());
			this->Nie = (gcnew System::Windows::Forms::Button());
			this->Tak = (gcnew System::Windows::Forms::Button());
			this->Picture = (gcnew System::Windows::Forms::PictureBox());
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
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->Picture);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->Rounds);
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
			this->Players->Location = System::Drawing::Point(0, 0);
			this->Players->Name = L"Players";
			this->Players->Size = System::Drawing::Size(189, 791);
			this->Players->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(379, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(343, 40);
			this->label2->TabIndex = 8;
			this->label2->Text = L"TWÓJ PRZECIWNIK !!";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(382, 599);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(361, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Czy zdradzasz swojego przeciwnika\?";
			// 
			// Rounds
			// 
			this->Rounds->AutoSize = true;
			this->Rounds->BackColor = System::Drawing::Color::Yellow;
			this->Rounds->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Rounds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Rounds->Location = System::Drawing::Point(584, 384);
			this->Rounds->Name = L"Rounds";
			this->Rounds->Size = System::Drawing::Size(65, 39);
			this->Rounds->TabIndex = 5;
			this->Rounds->Text = L"NR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(445, 385);
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
			this->bot->Location = System::Drawing::Point(442, 482);
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
			this->Nie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Nie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Nie->Location = System::Drawing::Point(735, 661);
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
			this->Tak->Location = System::Drawing::Point(211, 661);
			this->Tak->Name = L"Tak";
			this->Tak->Size = System::Drawing::Size(200, 100);
			this->Tak->TabIndex = 1;
			this->Tak->Text = L"Zdradzam";
			this->Tak->UseVisualStyleBackColor = false;
			this->Tak->Click += gcnew System::EventHandler(this, &GameWindow::Tak_Click);
			// 
			// Picture
			// 
			this->Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Picture.Image")));
			this->Picture->Location = System::Drawing::Point(278, 90);
			this->Picture->Name = L"Picture";
			this->Picture->Size = System::Drawing::Size(534, 292);
			this->Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Picture->TabIndex = 7;
			this->Picture->TabStop = false;
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


	public:
		GameWindow(void)
		{
			InitializeComponent();
		}
		GameWindow(String^ n, String^ i)
		{
			InitializeComponent();

			int rounds;
			std::string nick;
			nick = msclr::interop::marshal_as< std::string >(n);
			rounds = Int32::Parse(i);
			beginGame(nick, rounds);

		}


		System::Windows::Forms::Label^ label1;

		#pragma endregion
		System::Void GameWindow_Load(System::Object^ sender, System::EventArgs^ e) {

		}
	};
}