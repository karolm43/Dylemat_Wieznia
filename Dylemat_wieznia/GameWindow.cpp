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

		players[1]->setName("BOT_SOBOTA");
		players[2]->setName("BOT_NIEDZIELA");
		players[3]->setName("BOT_PONIEDZIALEK");


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
		Player* enemy = game.getEnemy(&user1);
		Picture->ImageLocation = msclr::interop::marshal_as<System::String^>(enemy->getImagePath());
		bot->Text = msclr::interop::marshal_as<System::String^>(enemy->getName());
		
		Rounds->Text = msclr::interop::marshal_as<System::String^>(std::to_string(game.getRoundNumber()));
		
	}




	void GameWindow::Update()
	{
		if (game.isEnded())
		{
			string text =
				user1.getName()+" Liczba punktów: "+std::to_string(user1.getPoints())
				+"\n"+bot1.getName()+" Punkty: "+ std::to_string(bot1.getPoints())
				+"\n" + bot2.getName() + " Punkty: " + std::to_string(bot2.getPoints())
				+ "\n" + bot3.getName() + " Punkty: " + std::to_string(bot3.getPoints());
			MessageBox::Show(msclr::interop::marshal_as<System::String^>(text),"KONIEC GRY");
			
			bot1.setPoints(0);
			bot2.setPoints(0);
			bot3.setPoints(0);
			bot1.setLastPoints(0);
			bot2.setLastPoints(0);
			bot3.setLastPoints(0);
			user1.setPoints(0);
			user1.setLastPoints(0);
			
			
			Form::Close();
		}
		else {
			game.startRound();
			Points->Items->Clear();
			Points->Items->Add("Punkty:");
			bot->Text = msclr::interop::marshal_as<System::String^>(game.getEnemy(&user1)->getName());
			for (int i = 0; i < 4; i++)
			{

				Points->Items->Add(players[i]->getLastPoints());
			}

			Rounds->Text = msclr::interop::marshal_as<System::String^>(std::to_string(game.getRoundNumber()));

			
		}
	}
	void GameWindow::yes()
	{
		Decision decision;
		decision.setDecision(true);
		user1.setDecision(decision);
		game.endRound();
	}
	void GameWindow::no()
	{
		Decision decision;
		decision.setDecision(false);
		user1.setDecision(decision);
		game.endRound();
	}
}
