#include "GameWindow.h"
#include "Myform.h"

using namespace std;

User user1;
Game game;
Player* players[4];
BasicBot bot1;
BasicBot bot2;
BasicBot bot3;
namespace Dylematwieznia
{
	
	void GameWindow::beginGame(string nick,int rounds)
	{
		
		game.setRounds(rounds);
		user1.setName(nick);
		
		players[0] = &user1;
		players[1] = &bot1;
		players[2] = &bot2;
		players[3] = &bot3;

		players[1]->setName("BOT_Marcin");
		players[2]->setName("BOT_Marcin1");
		players[3]->setName("BOT_Marcin2");


		game.addPlayer(&user1);
		game.addPlayer(&bot1);
		game.addPlayer(&bot2);
		game.addPlayer(&bot3);
		string listPlayer[4];
		
		Players->Items->Add("Gracze:");
		for (int i = 0; i <4; i++)
		{
			
			Players->Items->Add(msclr::interop::marshal_as<System::String^>(players[i]->getName()));
			Points->Items->Add(players[i]->getLastPoints());
		}
;		//game.
		game.run();
		game.startRound();

		
		Rounds->Text = msclr::interop::marshal_as<System::String^>(std::to_string(game.getRoundNumber()));
		
	}




	void GameWindow::Update()
	{
		game.startRound();
		Points->Items->Clear();
		Points->Items->Add("Punkty:");
		for (int i = 0; i < 4; i++)
		{

			Points->Items->Add(players[i]->getLastPoints());
		}
		
		Rounds->Text = msclr::interop::marshal_as<System::String^>(std::to_string(game.getRoundNumber()));
		
		if (game.isEnded())
		{
			string text = "Liczba punktów: "+std::to_string(user1.getPoints());
			MessageBox::Show(msclr::interop::marshal_as<System::String^>(text),"KONIEC GRY");
			Form::Close();
			
		}
	}
	void GameWindow::yes()
	{
		Decision decision;
		decision.setDecision(true);
		user1.setDecision(decision);

	}
	void GameWindow::no()
	{
		Decision decision;
		decision.setDecision(false);
		user1.setDecision(decision);
	}
}
