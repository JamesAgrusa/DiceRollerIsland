// dice roll adventure

#include <iostream>
#include <ctime>
#include <string>


using namespace std;

void gameIntro();
string gameInstructions();
void runGame();
void battlePractice();
string rollCheck();

class Player
{
public:
	float health = 50;
	string playerDiceRoll;

	Player();

	string playerRoll();
};

class Slime
{
public:
	float health = 10;
	string slimeDiceRoll;

	Slime();

	string slimeRoll();
};

int main()
{
	runGame();
}

void gameIntro()
{
	cout << "Wizard: Oh...I see, you are finally awake...\nYou have been sleeping for 3 weeks now." << endl;
	cout << "" << endl;
	cout << "You are on the island of Dice rolling. And to get yourself off this island you need to fight!" << endl;
	cout << "Now this is no ordinary way of fighting. You will need the idea of chance on your side!" << endl;
	cout << "Dice island is known for dice battles" << endl;
	cout << "Yes, I will give you a 6 sided dice to use on your adventure...\nYou will have many creatures to defeat on your path to the Dragon in the castle" << endl;
	cout << "If you defeat this dragon you will instantly be sent to a place of your choosing!" << endl;
}

string gameInstructions()
{
	string choice;
	cout << "" << endl;
	cout << "First, here are the settings of each number on the dice..." << endl;
	cout << "1: 10 attack\n2: no attack\n3: 20 attack\n4: instant win\n5: 30 attack\n6: 10 attack\n";
	cout << "" << endl;
	cout << "Each attacker will have 50 HP at the start of each fight, and you will regain your health if you win your battle!" << endl;
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

string rollCheck()
{
	// this is me trying to decide comparison values rolled, then how to get the damage to be dealt. 
	Player player;
	Slime slime;
	
	string RollCheck;
	if (player.playerDiceRoll == "one")
	{
		cout << "You did 10 damage" << endl;
	}
	if (player.playerDiceRoll == "two")
	{
		cout << "You did 10 damage" << endl;
	}
	if (player.playerDiceRoll == "three")
	{
		cout << "You did 10 damage" << endl;
	}
	if (player.playerDiceRoll == "four")
	{
		cout << "You did 10 damage" << endl;
	}
	if (player.playerDiceRoll == "five")
	{
		cout << "You did 10 damage" << endl;
	}
	if (player.playerDiceRoll == "six")
	{
		cout << "You did 10 damage" << endl;
	}
	return RollCheck;
}

void battlePractice()
{
	// the first battle sequence in the game, where the player will battle a slime

	Player player;
	Slime slime;
	cout << "a wild slime has appeared!" << endl;
	// do 
	// {
		player.playerRoll();
		slime.slimeRoll();
		// rollCheck();
	// } while (player.health > 0 || slime.health > 0);
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

void runGame()
{
	gameIntro();
	gameInstructions();
}