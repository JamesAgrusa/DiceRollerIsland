// dice roll adventure
// codingrabbi

//Figure out battle sequence
//figure out how many creatures to battle
//+ how much per creature victory for battle points
// dragon in castle at end of fighting avenue
// figure out a more compiled form of battle? we will see how lengthy this gets!
// update numbers from string to floats or ints!

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>


using namespace std;

class Game
{
public:
	void gameIntro();
	string gameInstructions();
	void runGame();
	void battlePractice();
	
};

class Player
{
public:
	float health = 50;
	float playerDamage{};
	string playerDiceRoll;

	Player();

	string playerRoll();
};

class Slime
{
public:
	float health = 10;
	float slimeDamage{};
	string slimeDiceRoll;

	Slime();

	string slimeRoll();
};

int main()
{
	Game game;

	game.runGame();
}

void Game::runGame()
{
	gameIntro();
	gameInstructions();
}

void Game::gameIntro()
{
	cout << "Wizard: Oh...I see, you are finally awake...\nYou have been sleeping for 3 weeks now." << endl;
	cout << "" << endl;
	cout << "You are on the island of Dice rolling. And to get yourself off this island you need to fight!" << endl;
	cout << "Now this is no ordinary way of fighting. You will need the idea of chance on your side!" << endl;
	cout << "Dice island is known for dice battles" << endl;
	cout << "Yes, I will give you a 6 sided dice to use on your adventure...\nYou will have many creatures to defeat on your path to the Dragon in the castle" << endl;
	cout << "If you defeat this dragon you will instantly be sent to a place of your choosing!" << endl;
}

string Game::gameInstructions()
{
	string choice;
	cout << "" << endl;
	cout << "First, here are the settings of each number on the dice..." << endl;
	cout << "1: 10 attack\n2: no attack\n3: 20 attack\n4: instant win\n5: 30 attack\n6: 10 attack\n";
	cout << "" << endl;
	cout << "You will gain more HP with each creature you defeat in battle. You will Start with 50." << endl;
	cout << "Are you ready to practice your first fight?\nYes or No" << endl;
	cin >> choice;
	if (choice == "Yes")
	{
		battlePractice();
	}
	else if (choice == "No")
	{
		cout << "Boo, you whore." << endl;
	}
	else
	{
		gameInstructions();
	}
	return choice;
}


void Game::battlePractice()
{
	string choice;
	// the first battle sequence in the game, where the player will battle a slime

	Player player;
	Slime slime;
	cout << "" << endl;
	cout << "A wild slime has appeared!" << endl;
	cout << "And it wants to attack you! Brace yourself" << endl;
	cout << "" << endl;
	player.playerRoll();
	
	// need a slimeDamage = playerDiceRoll - (slimeHealth/playerDiceRoll) and vise verca for the playerDamage from slime.
	//slimeHealth = slimeHealth - slimeDamage to calculate current health of slime
	// switch case here? but make the switch case its own function to plug into all the battles!
	switch(player.playerDiceRoll)
	{
		case 1:
		if (player.playerDiceRoll = "one")
		{
			cout << "Player dealt 10 damage to opponent!" << endl;
		}
		break;
		else if (player.playerDiceRoll = "one")
		{
			cout << "Player dealt 10 damage to opponent!" << endl;
		}
		break;
		else if (player.playerDiceRoll = "one")
		{
			cout << "Player dealt 10 damage to opponent!" << endl;
		}
		break;
		else if (player.playerDiceRoll = "one")
		{
			cout << "Player dealt 10 damage to opponent!" << endl;
		}
		break;
		else if (player.playerDiceRoll = "one")
		{
			cout << "Player dealt 10 damage to opponent!" << endl;
		}
		break;
		else if (player.playerDiceRoll = "one")
		{
			cout << "Player dealt 10 damage to opponent!" << endl;
		}
		break;


	}
	slime.slimeRoll();
	slime.slimeDamage = player.playerDiceRoll - slime.health;	
}



Player::Player()
{

}


string Player::playerRoll()
{
	// definine standard six sided die and the random roll function for battle to be used here
	string playerDiceRoll;
	string side[] = { "one", "two", "three", "four", "five", "six", "roll again"};
	srand((unsigned int)time(NULL));
	playerDiceRoll = side[rand() % 7];
	cout << "Player rolled: " << playerDiceRoll << endl;
	return playerDiceRoll;
}

Slime::Slime()
{

}

string Slime::slimeRoll()
{
	// will only give the option of rolling one so player can win their first battle!! well, hopefully xD
	string slimeDiceRoll;
	string side[] = { "one" };
	srand((unsigned int)time(NULL));
	slimeDiceRoll = side[rand() % 1];
	cout << "Slime rolled: " << slimeDiceRoll << endl;
	return slimeDiceRoll;
}

