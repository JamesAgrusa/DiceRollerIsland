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
	float diceRollDamage{};

	Player();

	string playerRoll();
};

class Slime
{
public:
	float health = 10;
	float slimeDamage{};
	string slimeDiceRoll;
	float diceRollDamage{10};

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
	cout << "1: 10 damage\n2: no damage\n3: 20 damage\n4: instant win\n5: 30 damage\n6: 10 damage\n";
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
	// the first battle sequence in the game, where the player will battle a slime
	// need a slimeDamage = playerDiceRoll - (slimeHealth/playerDiceRoll) and vise verca for the playerDamage from slime.
	//slimeHealth = slimeHealth - slimeDamage to calculate current health of slime
	// switch case here? but make the switch case its own function to plug into all the battles!
	// slime.slimeDamage = player.playerDiceRoll - slime.health;

	Player player;
	Slime slime;

	player.health = 50;
	slime.health = 10;
	string choice;
	
	cout << "" << endl;
	cout << "A wild slime has appeared!" << endl;
	cout << "And it wants to attack you! Brace yourself" << endl;
	cout << "" << endl;
	cout << "Player has: " << player.health << " health left" << endl;
	cout << "Slime has: " << slime.health << " health left" << endl;
	cout << "" << endl;

	// while (player.health > 0 || slime.health > 0)
	// {
		player.playerRoll();
		slime.slimeRoll();	
		slime.slimeDamage = slime.health - player.diceRollDamage;
		player.playerDamage = player.health - slime.diceRollDamage;
		cout << "Slime took damage and now has " << slime.slimeDamage << " health left" << endl;
		cout << "Player took damage and now has " << player.playerDamage << " health left " << endl;
	// }
}

Player::Player()
{

}

string Player::playerRoll()
{
	// definine standard six sided die and the random roll function for battle to be used here
	Player player;
	string playerDiceRoll;
	string side[] = { "one", "two", "three", "four", "five", "six", "roll again"};
	srand((unsigned int)time(NULL));
	playerDiceRoll = side[rand() % 7];
	cout << "Player rolled: " << playerDiceRoll << endl;
	if (playerDiceRoll == "one")
	{
		cout << "You have dealt 10 damage" << endl;
		player.diceRollDamage = 10;
	}
	else if (playerDiceRoll == "two")
	{
		cout << "You have dealt NO damage" << endl;
	}
	else if (playerDiceRoll == "three")
	{
		cout << "You have dealt 20 damage" << endl;
		player.diceRollDamage = 20;
	}
	else if (playerDiceRoll == "four")
	{
		cout << "You have won Instantly" << endl;
	}
	else if (playerDiceRoll == "five")
	{
		cout << "You have dealt 30 damage" << endl;
		player.diceRollDamage = 30;
	}
	else if (playerDiceRoll == "six")
	{
		cout << "You have dealt 10 damage" << endl;
		player.diceRollDamage = 10;
	}
	else if (playerDiceRoll == "roll again")
	{
		cout << "You need to roll again! Sorry! Comeback seasson is here though" << endl;
	}
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
	if (slimeDiceRoll == "one")
	{
		cout << "The slime has dealt 10 damage" << endl;
	}
	return slimeDiceRoll;
}

