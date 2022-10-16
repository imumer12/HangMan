#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

void welcome(char &play)
{
	system("COLOR 07");
	cout << "\n\t\t\t\tMADE BY UMER AHMED ." << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "\t\t  ____________________________________  " << endl;
	cout << "\t\t |              MAIN MENU             | " << endl;
	cout << "\t\t |             -----------            | " << endl;
	cout << "\t\t |     --XX---            ---XX--     | " << endl;
	cout << "\t\t |       :      ~Hangman~     :       | " << endl;
	cout << "\t\t |       :                    :       | " << endl;
	cout << "\t\t |       O      1.Play        O       | " << endl;
	cout << "\t\t |      /|\\                  /|\\      | " << endl;
	cout << "\t\t |      / \\     2.Exit       / \\      | " << endl;
	cout << "\t\t |                                    | " << endl;
	cout << "\t\t |                                    | " << endl;
	cout << "\t\t |____________________________________| " << endl
		 << endl;
	cout << "\t\t\t-->";
	play = _getch();
	system("cls");
}

void delay(int sec)
{
	for (int i = 0; i < sec; i++)
	{
		for (int j = 0; j < 100000000; j++)
		{
		}
	}
}

void rules()
{
	system("COLOR 03");
	cout << "\n\t\t\t\tMADE BY UMER AHMED ." << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "                                            ~WELCOME~                                              " << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "  (1)Choose one person to be the 'host.' This is the person that invents the puzzle     	  " << endl;
	cout << "  for the other person to solve. They will be tasked with choosing a word that 'the players' " << endl;
	cout << "  will have to solve.                                                                        " << endl
		 << endl;
	cout << "  The host should be able to spell confidently or the game will be impossible to win.        " << endl
		 << endl;
	cout << "  (2)If you are the host, choose a secret word. The other players will need to guess your    " << endl;
	cout << "  word letter by letter, so choose a word you think will be difficult to guess. Difficult    " << endl;
	cout << "  words usually have uncommon letters, like 'z,' or 'j,' and only a few vowels.              " << endl
		 << endl;
	cout << "  (3)Start guessing letters if you are the player. Once the word has been chosen and the     " << endl;
	cout << "  players know how many letters in the secret word, begin playing by entering which letters  " << endl;
	cout << "  are in the word.                                                                           " << endl
		 << endl;
	cout << "  (4)Whenever the players guess a letter that is not in the secret word they get a strike    " << endl;
	cout << "  that brings them closer to losing. To show this, the game draws a simple stick figure of a " << endl;
	cout << "  man being hung, adding a new part to the drawing with every wrong answer.                  " << endl
		 << endl;
	cout << "                                                                                             " << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "                                          loading..";
	delay(3);
	cout << "..";
	delay(3);
	cout << "..";
	delay(3);
	cout << "..";
	delay(3);
	cout << "..";
	cout << "\n\n\n\n\n\n\n\n\n"
		 << endl;
	system("cls");
}

inline void view(int countHang)
{

	if (countHang == 6)
	{
		system("COLOR 0A");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |                           \n"
				"\t\t    |                           \n"
				"\t\t    |                           \n"
				"\t\t ___|___                        \n\n\n";
	}
	else if (countHang == 5)
	{
		system("COLOR 09");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |      O                    \n"
				"\t\t    |                           \n"
				"\t\t    |                           \n"
				"\t\t ___|___                        \n\n\n";
	}
	else if (countHang == 4)
	{
		system("COLOR 0B");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |      O                    \n"
				"\t\t    |      |                    \n"
				"\t\t    |                           \n"
				"\t\t ___|___                        \n\n\n";
	}
	else if (countHang == 3)
	{
		system("COLOR 08");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |      O                    \n"
				"\t\t    |      |\\                  \n"
				"\t\t    |                           \n"
				"\t\t ___|___                        \n\n\n";
	}
	else if (countHang == 2)
	{
		system("COLOR 0E");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |      O                    \n"
				"\t\t    |     /|\\                  \n"
				"\t\t    |                           \n"
				"\t\t ___|___                        \n\n\n";
	}
	else if (countHang == 1)
	{
		system("COLOR 0D");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |      O                    \n"
				"\t\t    |     /|\\                  \n"
				"\t\t    |     /                     \n"
				"\t\t ___|___                        \n\n\n";
	}
	else if (countHang == 0)
	{
		system("COLOR 0C");
		cout << "\t\t     ______                     \n"
				"\t\t    |      |                    \n"
				"\t\t    |      :                    \n"
				"\t\t    |      O                    \n"
				"\t\t    |     /|\\                  \n"
				"\t\t    |     / \\                  \n"
				"\t\t ___|___                        \n\n\n";
	}
	cout << "Enter a Letter --> ";
}

inline void died()
{
	system("cls");
	system("COLOr 04");
	cout << "\n\t\t\t\tMADE BY UMER AHMED ." << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "\t\t  ____________________________________  \n"
			"\t\t |         "
		 << "Your friend "
		 << " DIED!         | \n"
			"\t\t |             -----------            | \n"
			"\t\t |              ( X _ X )             | \n"
			"\t\t |                                    | \n"
			"\t\t |                       ________     | \n"
			"\t\t |                      / Nooo!!!\\    | \n"
			"\t\t |       _____          \\  ______/    | \n"
			"\t\t |      (     )     <O>  \\/           | \n"
			"\t\t |      | RIP |      |                | \n"
			"\t\t |      |_____|     <<                | \n"
			"\t\t |   ------------------------------   | \n"
			"\t\t |                                    | \n"
			"\t\t |____________________________________| \n\n\n";
}

inline void lives()
{

	system("cls");
	cout << "\n\t\t\t\tMADE BY UMER AHMED ." << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "\t\t  ____________________________________  \n"
			"\t\t |         "
		 << "Your friend "
		 << " Lives!        | \n"
			"\t\t |             -----------            | \n"
			"\t\t |           ________                 | \n"
			"\t\t |          / I LIVE!\\                | \n"
			"\t\t |          \\  ______/                | \n"
			"\t\t |            \\/                      | \n"
			"\t\t |        |O/                         | \n"
			"\t\t |         |                          | \n"
			"\t\t |        / >                         | \n"
			"\t\t |      _____       \\O>   \\O/         | \n"
			"\t\t |     /     \\       |     |          | \n"
			"\t\t |    /       \\     < \\   / \\         | \n"
			"\t\t |   ------------------------------   | \n"
			"\t\t |____________________________________| \n\n\n";
}

void game()
{
	int tries = 6;
	char guess;
	bool c_guess = false;
	string word;
	string wordlist[99];

	ifstream file("Word.txt");
	for (int i = 0; i < 99; i++)
	{
		file >> wordlist[i];
	}

	int ramdon_n = rand() % 100;
	word = wordlist[ramdon_n];
	file.close();

	string mys(word.length(), '*');

	while (tries >= 0)
	{
		system("cls");
		c_guess = false;
		cout << "\n\t\t\t\tMADE BY UMER AHMED ." << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		cout << "\t\tThere are " << mys.length() << " alphabets in this word. " << endl;
		cout << "\t\tGuesses left " << tries << endl;
		cout << "\t\tGuess an alphabet. " << endl;
		cout << "\t\tWord ( " << mys << " )" << endl;
		// cout << "\t\tThe word( " << word << " )" << endl;
		cout << "----------------------------------------------------------------------------------------" << endl;
		view(tries);
		guess = _getche();

		for (int i = 0; i < mys.length(); i++)
		{
			if (word[i] == guess)
			{
				mys[i] = guess;
				cout << "Yes " << guess << " is one of the alphabets!" << endl;
				delay(3);
				c_guess = true;
			}
		}
		if (word == mys)
		{
			lives();
			delay(5);
			system("cls");
			break;
		}
		if (c_guess == false)
		{
			tries--;
		}
	}
	if (tries <= 0)
	{
		died();
		delay(5);
		system("csl");
	}
}

bool playagain()
{
	system("cls");
	bool again;
	again = false;
	char ch = 0;
	system("COLOR 0A");
	cout << "\n\t\t\t\tMADE BY UMER AHMED ." << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t            ______                      " << endl;
	cout << "\t\t           |      |                     " << endl;
	cout << "\t\t           |      :                     " << endl;
	cout << "\t\t           |                            " << endl;
	cout << "\t\t           |          \\ O    O         " << endl;
	cout << "\t\t           |           |\\   /|7        " << endl;
	cout << "\t\t        ___|___       / \\   / \\       " << endl;
	cout << "\t\t-----------------------------------------" << endl;
	cout << "\t\t   DO you want to play again(Y/N) ";
	ch = _getch();
	if (ch == 'Y' || ch == 'y')
	{
		again = true;
	}
	system("cls");
	return again;
}

int main()
{
	bool ch = true;
	char play = 0;
	welcome(play);
	while (ch == true)
	{

		switch (play)
		{
		case '1':
		{
			rules();
			game();
			ch = playagain();
			break;
		}
		case '2':
		{
			system("COLOR 04");
			cout << "\n\n\n\n\n\t\t\t\t\tExiting the game..";
			delay(3);
			cout << "..";
			delay(3);
			cout << "..";
			delay(3);
			cout << "..";
			delay(3);
			cout << "..";
			cout << "\n\n\n\n\n\n\n\n\n\n\n"
				 << endl;
			break;
		}
		default:
		{
			break;
		}
		}
		if (play != '1')
		{
			break;
		}
	}
	return 0;
}