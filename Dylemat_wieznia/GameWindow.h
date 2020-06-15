#pragma once

#include <iostream>
#include "Game.h"
#include "User.h"
#include "BasicBot.h"
#include "Player.h"

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


	private: System::Windows::Forms::ListBox^ Gracze;


	private: System::Windows::Forms::ListBox^ Punkty;

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
			this->Punkty = (gcnew System::Windows::Forms::ListBox());
			this->Gracze = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bot = (gcnew System::Windows::Forms::Label());
			this->Nie = (gcnew System::Windows::Forms::Button());
			this->Tak = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
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
			this->splitContainer1->Panel1->Controls->Add(this->Punkty);
			this->splitContainer1->Panel1->Controls->Add(this->Gracze);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->bot);
			this->splitContainer1->Panel2->Controls->Add(this->Nie);
			this->splitContainer1->Panel2->Controls->Add(this->Tak);
			this->splitContainer1->Size = System::Drawing::Size(924, 633);
			this->splitContainer1->SplitterDistance = 234;
			this->splitContainer1->TabIndex = 0;
			// 
			// Punkty
			// 
			this->Punkty->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->Punkty->Dock = System::Windows::Forms::DockStyle::Left;
			this->Punkty->FormattingEnabled = true;
			this->Punkty->ItemHeight = 16;
			this->Punkty->Location = System::Drawing::Point(136, 0);
			this->Punkty->Name = L"Punkty";
			this->Punkty->Size = System::Drawing::Size(100, 633);
			this->Punkty->TabIndex = 10;
			// 
			// Gracze
			// 
			this->Gracze->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->Gracze->Dock = System::Windows::Forms::DockStyle::Left;
			this->Gracze->FormattingEnabled = true;
			this->Gracze->ItemHeight = 16;
			this->Gracze->Location = System::Drawing::Point(0, 0);
			this->Gracze->Name = L"Gracze";
			this->Gracze->Size = System::Drawing::Size(136, 633);
			this->Gracze->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::SpringGreen;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(372, 137);
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
			this->label1->Location = System::Drawing::Point(233, 138);
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
			this->bot->Location = System::Drawing::Point(234, 195);
			this->bot->Name = L"bot";
			this->bot->Size = System::Drawing::Size(222, 52);
			this->bot->TabIndex = 3;
			this->bot->Text = L"Nick Bota";
			this->bot->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Nie
			// 
			this->Nie->Location = System::Drawing::Point(413, 313);
			this->Nie->Name = L"Nie";
			this->Nie->Size = System::Drawing::Size(200, 100);
			this->Nie->TabIndex = 2;
			this->Nie->Text = L"Nie zdradzam";
			this->Nie->UseVisualStyleBackColor = true;
			// 
			// Tak
			// 
			this->Tak->Location = System::Drawing::Point(80, 313);
			this->Tak->Name = L"Tak";
			this->Tak->Size = System::Drawing::Size(200, 100);
			this->Tak->TabIndex = 1;
			this->Tak->Text = L"Zdradzam";
			this->Tak->UseVisualStyleBackColor = true;
			this->Tak->Click += gcnew System::EventHandler(this, &GameWindow::Tak_Click);
			// 
			// GameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 633);
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
			this->ResumeLayout(false);

		}
#pragma endregion
		
	public: System::Void GameWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		
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
		game.run();
		game.startRound();
		
	}
	
		   
private: System::Void Tak_Click(System::Object^ sender, System::EventArgs^ e) {
	

}

};
}
