#include "GameWindow.h"

using namespace std;

User user1;
Game game;
Player* players[4];

namespace Dylematwieznia
{
	
	void GameWindow::beginGame(string nick,int rounds)
	{
		
		game.setRounds(rounds);
		user1.setName(nick);
		BasicBot bot1;
		BasicBot bot2;
		BasicBot bot3;
		players[0] = &user1;
		players[1] = &bot1;
		players[2] = &bot2;
		players[3] = &bot3;
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
		string nr;
		nr = game.getRoundNumber();
		Rounds->Text = msclr::interop::marshal_as<System::String^>(nr);
		game.startRound();
	}




	void GameWindow::Update()
	{
		Points->Items->Clear();
		Points->Items->Add("Punkty:");
		for (int i = 0; i < 4; i++)
		{

			Points->Items->Add(players[i]->getLastPoints());
		}
		string nr;
		nr = game.getRoundNumber();
		Rounds->Text = msclr::interop::marshal_as<System::String^>(nr);
		if (game.isEnded())
		{
			//messegebox
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
