#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment(lib, "winmm.lib")

using namespace std;
bool Check = false;

void delay(int sec)
{ // Blank loop
	for (int i = 0; i < sec; i++)
	{
		for (int j = 0; j < 100000000; j++)
		{
		}
	}
}

void exit()
{
	system("cls");
	cout << "\n\t-------------------------------------------------------------------------------------------------" << endl;
	cout << "\t|\t\t\t\t\tName: UMER AHMED .\t\t\t\t\t|" << endl;
	cout << "\t|\t\t\t\t\tReg-no: BCS203182. \t\t\t\t\t|" << endl;
	cout << "\t-------------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "\t     ___           ___       ___           ___                       ___           ___     " << endl;
	cout << "\t    /\\  \\         /\\__\\     /\\  \\         /\\  \\          ___        /\\__\\         /\\  \\    " << endl;
	cout << "\t   /::\\  \\       /:/  /    /::\\  \\       /::\\  \\        /\\  \\      /::|  |       /::\\  \\   " << endl;
	cout << "\t  /:/\\:\\  \\     /:/  /    /:/\\:\\  \\     /:/\\ \\  \\       \\:\\  \\    /:|:|  |      /:/\\:\\  \\  " << endl;
	cout << "\t /:/  \\:\\  \\   /:/  /    /:/  \\:\\  \\   _\\:\\~\\ \\  \\      /::\\__\\  /:/|:|  |__   /:/  \\:\\  \\ " << endl;
	cout << "\t/:/__/ \\:\\__\\ /:/__/    /:/__/ \\:\\__\\ /\\ \\:\\ \\ \\__\\  __/:/\\/__/ /:/ |:| /\\__\\ /:/__/_\\:\\__\\ " << endl;
	cout << "\t\\:\\  \\  \\/__/ \\:\\  \\    \\:\\  \\ /:/  / \\:\\ \\:\\ \\/__/ /\\/:/  /    \\/__|:|/:/  / \\:\\  /\\ \\/__/ " << endl;
	cout << "\t \\:\\  \\        \\:\\  \\    \\:\\  /:/  /   \\:\\ \\:\\__\\   \\::/__/         |:/:/  /   \\:\\ \\:\\__\\   " << endl;
	cout << "\t  \\:\\  \\        \\:\\  \\    \\:\\/:/  /     \\:\\/:/  /    \\:\\__\\         |::/  /     \\:\\/:/  /   " << endl;
	cout << "\t   \\:\\__\\        \\:\\__\\    \\::/  /       \\::/  /      \\/__/         /:/  /       \\::/  /   " << endl;
	cout << "\t    \\/__/         \\/__/     \\/__/         \\/__/                     \\/__/         \\/__/    " << endl;

	cout << endl;

	cout << "\n\n";
	cout << "\t-------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\tPress Any key to Exit \n";
	cout << "\t-------------------------------------------------------------------------------------------------" << endl;
}

class resource
{ // All resource
protected:
	char guess;
	bool c_guess;
	string word;
	string wordlist[99];

public:
	virtual void game() = 0; // abstract class

	void song()
	{
		sndPlaySound(TEXT("lost.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
	}
};

class Score
{ // To Find score
private:
protected:
	string Name[10];
	string c_Name;
	int c_Level = 0;
	int levels[10];
	int points[10];
	int rank[10];

public:
	void inputName()
	{
		system("COLOR 0B");

		cout << "\n\n\t\t Enter your Gamer tag: ";
		cin >> c_Name;
		system("cls");
	}

	void learderBoard()
	{
		ifstream scoreFile;
		scoreFile.open("Highscore.txt");
		for (int i = 0; i < 10; i++)
		{
			scoreFile >> rank[i] >> Name[i] >> points[i];
		}

		scoreFile.close();

		system("COLOR 0A");

		cout << "\t|                                       Leader Board.                                           |" << endl;
		cout << "\t-------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		for (int i = 0; i < 10; i++)
		{

			cout << "\t\tRank: " << rank[i] << "\tName: " << Name[i] << "\tPoints: " << points[i] << endl;
			cout << endl;
		}
		cout << "\t-------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|                              Press any Key to go back to Main Menu                            |" << endl;
		cout << "\t-------------------------------------------------------------------------------------------------" << endl;
		_getch();
		system("cls");
	}

	void updateScore()
	{

		int temppoints[10];
		string TempName[10];
		ifstream file;
		file.open("Highscore.txt");
		for (int i = 0; i < 10; i++)
		{
			file >> rank[i] >> TempName[i] >> temppoints[i];
		}
		file.close();
		for (int i = 0; i < 10; i++)
		{
			if (c_Level >= temppoints[i])
			{
				points[i] = c_Level;
				Name[i] = c_Name;
				for (int j = i + 1; j < 10; j++)
				{
					points[j] = temppoints[i];
					Name[j] = TempName[i];
					i++;
				}
				break;
			}
			else
			{ // DEfualt
				points[i] = temppoints[i];
				Name[i] = TempName[i];
			}
		}

		ofstream fil;
		fil.open("Highscore.txt");
		for (int i = 0; i < 10; i++)
		{
			fil << i + 1 << " " << Name[i] << " " << points[i] << endl;
		}
		fil.close();
	}
};

class Template
{ // Basic Body
public:
	void display_H()
	{
		system("cls");

		cout << endl;
		cout << "\t          _____                   _____                   _____                   _____          " << endl;
		cout << "\t         /\\    \\                 /\\    \\                 /\\    \\                 /\\    \\         " << endl;
		cout << "\t        /::\\____\\               /::\\    \\               /::\\____\\               /::\\    \\        " << endl;
		cout << "\t       /:::/    /              /::::\\    \\             /::::|   |              /::::\\    \\       " << endl;
		cout << "\t      /:::/    /              /::::::\\    \\           /:::::|   |             /::::::\\    \\      " << endl;
		cout << "\t     /:::/    /              /:::/\\:::\\    \\         /::::::|   |            /:::/\\:::\\    \\     " << endl;
		cout << "\t    /:::/____/              /:::/__\\:::\\    \\       /:::/|::|   |           /:::/  \\:::\\    \\    " << endl;
		cout << "\t   /::::\\    \\             /::::\\   \\:::\\    \\     /:::/ |::|   |          /:::/    \\:::\\    \\   " << endl;
		cout << "\t  /::::::\\    \\   _____   /::::::\\   \\:::\\    \\   /:::/  |::|   | _____   /:::/    / \\:::\\    \\  " << endl;
		cout << "\t /:::/\\:::\\    \\ /\\    \\ /:::/\\:::\\   \\:::\\    \\ /:::/   |::|   |/\\    \\ /:::/    /   \\:::\\ ___\\ " << endl;
		cout << "\t/:::/  \\:::\\    /::\\____/:::/  \\:::\\   \\:::\\____/:: /    |::|   /::\\____/:::/____/  ___\\:::|    |" << endl;
		cout << "\t\\::/    \\:::\\  /:::/    \\::/    \\:::\\  /:::/    \\::/    /|::|  /:::/    \\:::\\    \\ /\\  /:::|____|" << endl;
		cout << "\t \\/____/ \\:::\\/:::/    / \\/____/ \\:::\\/:::/    / \\/____/ |::| /:::/    / \\:::\\    /::\\ \\::/    / " << endl;
		cout << "\t          \\::::::/    /           \\::::::/    /          |::|/:::/    /   \\:::\\   \\:::\\ \\/____/  " << endl;
		cout << "\t           \\::::/    /             \\::::/    /           |::::::/    /     \\:::\\   \\:::\\____\\    " << endl;
		cout << "\t           /:::/    /              /:::/    /            |:::::/    /       \\:::\\  /:::/    /    " << endl;
		cout << "\t          /:::/    /              /:::/    /             |::::/    /         \\:::\\/:::/    /     " << endl;
		cout << "\t         /:::/    /       _____  /:::/    /       _____  /:::/    /       _____::::::/    /      " << endl;
		cout << "\t        /:::/    /       /\\    \\/:::/    /       /\\    \\/:::/    /       /\\    \\::::/    /       " << endl;
		cout << "\t        \\::/    /       /::\\____\\::/    /       /::\\    \\::/    /       /::\\____\\::/____/        " << endl;
		cout << "\t         \\/____/       /::::|   |\\/____/       /::::\\    \\/____/       /::::|   |                " << endl;
		cout << "\t                      /:::::|   |             /::::::\\    \\           /:::::|   |                " << endl;
		cout << "\t                     /::::::|   |            /:::/\\:::\\    \\         /::::::|   |                " << endl;
		cout << "\t                    /:::/|::|   |           /:::/__\\:::\\    \\       /:::/|::|   |                " << endl;
		cout << "\t                   /:::/ |::|   |          /::::\\   \\:::\\    \\     /:::/ |::|   |                " << endl;
		cout << "\t                  /:::/  |::|___|______   /::::::\\   \\:::\\    \\   /:::/  |::|   | _____          " << endl;
		cout << "\t                 /:::/   |::::::::\\    \\ /:::/\\:::\\   \\:::\\    \\ /:::/   |::|   |/\\    \\         " << endl;
		cout << "\t                /:::/    |:::::::::\\____/:::/  \\:::\\   \\:::\\____/:: /    |::|   /::\\____\\        " << endl;
		cout << "\t                \\::/    / ~~~~~/:::/    \\::/    \\:::\\  /:::/    \\::/    /|::|  /:::/    /        " << endl;
		cout << "\t                 \\/____/      /:::/    / \\/____/ \\:::\\/:::/    / \\/____/ |::| /:::/    /         " << endl;
		cout << "\t                             /:::/    /           \\::::::/    /          |::|/:::/    /          " << endl;
		cout << "\t                            /:::/    /             \\::::/    /           |::::::/    /           " << endl;
		cout << "\t                           /:::/    /              /:::/    /            |:::::/    /            " << endl;
		cout << "\t                          /:::/    /              /:::/    /             |::::/    /             " << endl;
		cout << "\t                         /:::/    /              /:::/    /              /:::/    /              " << endl;
		cout << "\t                        /:::/    /              /:::/    /              /:::/    /               " << endl;
		cout << "\t                        \\::/    /               \\::/    /               \\::/    /                " << endl;
		cout << "\t                         \\/____/                 \\/____/                 \\/____/                 " << endl;
	}

	void display_Name()
	{
		system("cls");

		cout << endl;
		cout << "\t           _____                    _____                    _____                    _____" << endl;
		cout << "\t          /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\" << endl;
		cout << "\t         /::\\____\\                /::\\____\\                /::\\    \\                /::\\    \\" << endl;
		cout << "\t        /:::/    /               /::::|   |               /::::\\    \\              /::::\\    \\" << endl;
		cout << "\t       /:::/    /               /:::::|   |              /::::::\\    \\            /::::::\\    \\" << endl;
		cout << "\t      /:::/    /               /::::::|   |             /:::/\\:::\\    \\          /:::/\\:::\\    \\" << endl;
		cout << "\t     /:::/    /               /:::/|::|   |            /:::/__\\:::\\    \\        /:::/__\\:::\\    \\" << endl;
		cout << "\t    /:::/    /               /:::/ |::|   |           /::::\\   \\:::\\    \\      /::::\\   \\:::\\    \\" << endl;
		cout << "\t   /:::/    /      _____    /:::/  |::|___|______    /::::::\\   \\:::\\    \\    /::::::\\   \\:::\\    \\" << endl;
		cout << "\t  /:::/____/      /\\    \\  /:::/   |::::::::\\    \\  /:::/\\:::\\   \\:::\\    \\  /:::/\\:::\\   \\:::\\____\\" << endl;
		cout << "\t |:::|    /      /::\\____\\/:::/    |:::::::::\\____\\:::/ __\\:::\\   \\:::\\____\\/:::/  \\:::\\   \\:::|    |" << endl;
		cout << "\t |:::|____\\     /:::/    /\\::/    / ~~~~~/:::/    /\\:::\\   \\:::\\   \\::/    /\\::/   |::::\\  /:::|____|" << endl;
		cout << "\t  \\:::\\    \\   /:::/    /  \\/____/      /:::/    /  \\:::\\   \\:::\\   \\/____/  \\/____|:::::\\/:::/    /" << endl;
		cout << "\t   \\:::\\    \\ /:::/    /               /:::/    /    \\:::\\   \\:::\\    \\            |:::::::::/    /" << endl;
		cout << "\t    \\:::\\    /:::/    /               /:::/    /      \\:::\\   \\:::\\____\\           |::|\\::::/    /" << endl;
		cout << "\t     \\:::\\__/:::/    /               /:::/    /        \\:::\\   \\::/    /           |::| \\::/____/" << endl;
		cout << "\t      \\::::::::/    /               /:::/    /          \\:::\\   \\/____/            |::|  ~|" << endl;
		cout << "\t       \\::::::/    /               /:::/    /            \\:::\\    \\                |::|   |" << endl;
		cout << "\t        \\::::/    /               /:::/    /              \\:::\\____\\               \\::|   |" << endl;
		cout << "\t         \\::/____/                \\::/    /                \\::/    /                \\:|   |" << endl;
		cout << "\t          ~~                       \\/____/                  \\/____/                  \\|___|" << endl;
		cout << endl;
		cout << "\t           _____                    _____                    _____                    _____                    _____          " << endl;
		cout << "\t          /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\                  /\\    \\         " << endl;
		cout << "\t         /::\\    \\                /::\\____\\                /::\\____\\                /::\\    \\                /::\\    \\        " << endl;
		cout << "\t        /::::\\    \\              /:::/    /               /::::|   |               /::::\\    \\              /::::\\    \\       " << endl;
		cout << "\t       /::::::\\    \\            /:::/    /               /:::::|   |              /::::::\\    \\            /::::::\\    \\      " << endl;
		cout << "\t      /:::/\\:::\\    \\          /:::/    /               /::::::|   |             /:::/\\:::\\    \\          /:::/\\:::\\    \\     " << endl;
		cout << "\t     /:::/__\\:::\\    \\        /:::/____/               /:::/|::|   |            /:::/__\\:::\\    \\        /:::/  \\:::\\    \\    " << endl;
		cout << "\t    /::::\\   \\:::\\    \\      /::::\\    \\              /:::/ |::|   |           /::::\\   \\:::\\    \\      /:::/    \\:::\\    \\   " << endl;
		cout << "\t   /::::::\\   \\:::\\    \\    /::::::\\    \\   _____    /:::/  |::|___|______    /::::::\\   \\:::\\    \\    /:::/    / \\:::\\    \\  " << endl;
		cout << "\t  /:::/\\:::\\   \\:::\\    \\  /:::/\\:::\\    \\ /\\    \\  /:::/   |::::::::\\    \\  /:::/\\:::\\   \\:::\\    \\  /:::/    /   \\:::\\ ___\\ " << endl;
		cout << "\t /:::/  \\:::\\   \\:::\\____\\/:::/  \\:::\\    /::\\____\\/:::/    |:::::::::\\____\\/:::/__\\:::\\   \\:::\\____\\/:::/____/     \\:::|    |" << endl;
		cout << "\t \\::/    \\:::\\  /:::/    /\\::/    \\:::\\  /:::/    /\\::/    / ~~~~~/:::/    /\\:::\\   \\:::\\   \\::/    /\\:::\\    \\     /:::|____|" << endl;
		cout << "\t  \\/____/ \\:::\\/:::/    /  \\/____/ \\:::\\/:::/    /  \\/____/      /:::/    /  \\:::\\   \\:::\\   \\/____/  \\:::\\    \\   /:::/    / " << endl;
		cout << "\t           \\::::::/    /            \\::::::/    /               /:::/    /    \\:::\\   \\:::\\    \\       \\:::\\    \\ /:::/    /  " << endl;
		cout << "\t            \\::::/    /              \\::::/    /               /:::/    /      \\:::\\   \\:::\\____\\       \\:::\\    /:::/    /   " << endl;
		cout << "\t            /:::/    /               /:::/    /               /:::/    /        \\:::\\   \\::/    /        \\:::\\  /:::/    /    " << endl;
		cout << "\t           /:::/    /               /:::/    /               /:::/    /          \\:::\\   \\/____/          \\:::\\/:::/    /     " << endl;
		cout << "\t          /:::/    /               /:::/    /               /:::/    /            \\:::\\    \\               \\::::::/    /      " << endl;
		cout << "\t         /:::/    /               /:::/    /               /:::/    /              \\:::\\____\\               \\::::/    /       " << endl;
		cout << "\t         \\::/    /                \\::/    /                \\::/    /                \\::/    /                \\::/____/        " << endl;
		cout << "\t          \\/____/                  \\/____/                  \\/____/                  \\/____/                  ~~              " << endl;
	}

	void display_LevelUp()
	{

		system("cls");

		cout << endl;
		cout << "\t                    ___                        ___                         ___           ___       " << endl;
		cout << "\t                   /  /\\          ___         /  /\\                       /__/\\         /  /\\  " << endl;
		cout << "\t                  /  /:/_        /__/\\       /  /:/_                      \\  \\:\\       /  /::\\ " << endl;
		cout << "\t  ___     ___    /  /:/ /\\       \\  \\:\\     /  /:/ /\\    ___     ___       \\  \\:\\     /  /:/\\:\\" << endl;
		cout << "\t /__/\\   /  /\\  /  /:/ /:/_       \\  \\:\\   /  /:/ /:/_  /__/\\   /  /\\  ___  \\  \\:\\   /  /:/~/:/" << endl;
		cout << "\t \\  \\:\\ /  /:/ /__/:/ /:/ /\\  ___  \\__\\:\\ /__/:/ /:/ /\\ \\  \\:\\ /  /:/ /__/\\  \\__\\:\\ /__/:/ /:/ " << endl;
		cout << "\t  \\  \\:\\  /:/  \\  \\:\\/:/ /:/ /__/\\ |  |:| \\  \\:\\/:/ /:/  \\  \\:\\  /:/  \\  \\:\\ /  /:/ \\  \\:\\/:/  " << endl;
		cout << "\t   \\  \\:\\/:/    \\  \\::/ /:/  \\  \\:\\|  |:|  \\  \\::/ /:/    \\  \\:\\/:/    \\  \\:\\  /:/   \\  \\::/   " << endl;
		cout << "\t    \\  \\::/      \\  \\:\\/:/    \\  \\:\\__|:|   \\  \\:\\/:/      \\  \\::/      \\  \\:\\/:/     \\  \\:\\   " << endl;
		cout << "\t     \\__\\/        \\  \\::/      \\__\\::::/     \\  \\::/        \\__\\/        \\  \\::/       \\  \\:\\  " << endl;
		cout << "\t                   \\__\\/           ~~~~       \\__\\/                       \\__\\/         \\__\\/  " << endl;
	}

	void welcome(char &play)
	{
		system("COLOR 07");

		cout << "\t\t\t\t  ____________________________________  " << endl;
		cout << "\t\t\t\t |              MAIN MENU             | " << endl;
		cout << "\t\t\t\t |             -----------            | " << endl;
		cout << "\t\t\t\t |     --XX---            ---XX--     | " << endl;
		cout << "\t\t\t\t |       :      ~Hangman~     :       | " << endl;
		cout << "\t\t\t\t |       :                    :       | " << endl;
		cout << "\t\t\t\t |       O      1.Play        O       | " << endl;
		cout << "\t\t\t\t |      /|\\                  /|\\      | " << endl;
		cout << "\t\t\t\t |      / \\     2.HighScore  / \\      | " << endl;
		cout << "\t\t\t\t |                                    | " << endl;
		cout << "\t\t\t\t |              3.Exit                | " << endl;
		cout << "\t\t\t\t |                          m = Mute  | " << endl;
		cout << "\t\t\t\t |____________________________________| " << endl
			 << endl;
		cout << "\t\t\t\t\t-->";
		play = _getch();
		system("cls");
	}

	void Level(char &d)
	{
		system("COLOR 07");

		cout << "\t\t\t\t  ____________________________________  " << endl;
		cout << "\t\t\t\t |           Difficulty level         | " << endl;
		cout << "\t\t\t\t |          ------------------        | " << endl;
		cout << "\t\t\t\t |     --XX---            ---XX--     | " << endl;
		cout << "\t\t\t\t |       :      ~Hangman~     :       | " << endl;
		cout << "\t\t\t\t |       :                    :       | " << endl;
		cout << "\t\t\t\t |       O      1.Easy        O       | " << endl;
		cout << "\t\t\t\t |      /|\\                  /|\\      | " << endl;
		cout << "\t\t\t\t |      / \\     2.Medium     / \\      | " << endl;
		cout << "\t\t\t\t |                                    | " << endl;
		cout << "\t\t\t\t |              3.Hard                | " << endl;
		cout << "\t\t\t\t |____________________________________| " << endl
			 << endl;
		cout << "\t\t\t\t\t-->";
		d = _getch();
		system("cls");
	}

	void rules()
	{
		system("COLOR 03");

		cout << "\t|                                            ~WELCOME~                                          |" << endl;
		cout << "\t-------------------------------------------------------------------------------------------------" << endl;
		cout << "\t|  (1)Choose one person to be the 'host.' This is the person that invents the puzzle     	|" << endl;
		cout << "\t|  for the other person to solve. They will be tasked with choosing a word that 'the players'   |" << endl;
		cout << "\t|  will have to solve.                                                                          |" << endl;
		cout << "\t|                                                                                               |" << endl;
		cout << "\t|  The host should be able to spell confidently or the game will be impossible to win.          |" << endl;
		cout << "\t|                                                                                               |" << endl;
		cout << "\t|  (2)If you are the host, choose a secret word. The other players will need to guess your      |" << endl;
		cout << "\t|  word letter by letter, so choose a word you think will be difficult to guess. Difficult      |" << endl;
		cout << "\t|  words usually have uncommon letters, like 'z,' or 'j,' and only a few vowels.                |" << endl;
		cout << "\t|                                                                                               |" << endl;
		cout << "\t|  (3)Start guessing letters if you are the player. Once the word has been chosen and the       |" << endl;
		cout << "\t|  players know how many letters in the secret word, begin playing by entering which letters    |" << endl;
		cout << "\t|  are in the word.                                                                             |" << endl;
		cout << "\t|                                                                                               |" << endl;
		cout << "\t|  (4)Whenever the players guess a letter that is not in the secret word they get a strike      |" << endl;
		cout << "\t|  that brings them closer to losing. To show this, the game draws a simple stick figure of a   |" << endl;
		cout << "\t|  man being hung, adding a new part to the drawing with every wrong answer.                    |" << endl;
		cout << "\t|                                                                                               |" << endl;
		cout << "\t|                                                                                               |" << endl;
		cout << "\t-------------------------------------------------------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\tloading..";
		delay(3);
		cout << "..";
		delay(3);
		cout << "..";
		delay(3);
		cout << "..";
		delay(3);
		cout << "..";
		system("cls");
	}

	void display(int countHang)
	{

		if (countHang == 6)
		{
			system("COLOR 0A");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		else if (countHang == 5)
		{
			system("COLOR 09");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |      O                    \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		else if (countHang == 4)
		{
			system("COLOR 0B");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |      O                    \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		else if (countHang == 3)
		{
			system("COLOR 08");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |      O                    \n"
					"\t\t\t\t    |      |\\                  \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		else if (countHang == 2)
		{
			system("COLOR 0E");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |      O                    \n"
					"\t\t\t\t    |     /|\\                  \n"
					"\t\t\t\t    |                           \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		else if (countHang == 1)
		{
			system("COLOR 0D");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |      O                    \n"
					"\t\t\t\t    |     /|\\                  \n"
					"\t\t\t\t    |     /                     \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		else if (countHang == 0)
		{
			system("COLOR 0C");
			cout << "\t\t\t\t     ______                     \n"
					"\t\t\t\t    |      |                    \n"
					"\t\t\t\t    |      :                    \n"
					"\t\t\t\t    |      O                    \n"
					"\t\t\t\t    |     /|\\                  \n"
					"\t\t\t\t    |     / \\                  \n"
					"\t\t\t\t ___|___                        \n\n\n";
		}
		cout << "\t\tEnter a Letter --> ";
	}

	void died()
	{
		system("cls");
		system("COLOr 04");

		cout << "\t\t\t\t  ____________________________________  \n"
				"\t\t\t\t |         "
			 << "Your friend "
			 << " DIED!         | \n"
				"\t\t\t\t |             -----------            | \n"
				"\t\t\t\t |              ( X _ X )             | \n"
				"\t\t\t\t |                                    | \n"
				"\t\t\t\t |                       ________     | \n"
				"\t\t\t\t |                      / Nooo!!!\\    | \n"
				"\t\t\t\t |       _____          \\  ______/    | \n"
				"\t\t\t\t |      (     )     <O>  \\/           | \n"
				"\t\t\t\t |      | RIP |      |                | \n"
				"\t\t\t\t |      |_____|     <<                | \n"
				"\t\t\t\t |   ------------------------------   | \n"
				"\t\t\t\t |                                    | \n"
				"\t\t\t\t |____________________________________| \n\n\n";
	}

	void lives()
	{
		system("cls");

		cout << "\t\t\t\t  ____________________________________  \n"
				"\t\t\t\t |         "
			 << "Your friend "
			 << " Lives!        | \n"
				"\t\t\t\t |             -----------            | \n"
				"\t\t\t\t |           ________                 | \n"
				"\t\t\t\t |          / I LIVE!\\                | \n"
				"\t\t\t\t |          \\  ______/                | \n"
				"\t\t\t\t |            \\/                      | \n"
				"\t\t\t\t |        |O/                         | \n"
				"\t\t\t\t |         |                          | \n"
				"\t\t\t\t |        / >                         | \n"
				"\t\t\t\t |      _____       \\O>   \\O/         | \n"
				"\t\t\t\t |     /     \\       |     |          | \n"
				"\t\t\t\t |    /       \\     < \\   / \\         | \n"
				"\t\t\t\t |   ------------------------------   | \n"
				"\t\t\t\t |____________________________________| \n\n\n";
	}

	bool playagain()
	{
		system("cls");
		bool again;
		again = false;
		char ch = 0;
		system("COLOR 0A");

		cout << "\t\t\t\t _______________________________________" << endl;
		cout << "\t\t\t\t|                                       |" << endl;
		cout << "\t\t\t\t|            ______                     |" << endl;
		cout << "\t\t\t\t|           |      |                    |" << endl;
		cout << "\t\t\t\t|           |      :                    |" << endl;
		cout << "\t\t\t\t|           |                           |" << endl;
		cout << "\t\t\t\t|           |          \\ O    O         |" << endl;
		cout << "\t\t\t\t|           |           |\\   /|7        |" << endl;
		cout << "\t\t\t\t|        ___|___       / \\   / \\        |" << endl;
		cout << "\t\t\t\t|                                       |" << endl;
		cout << "\t\t\t\t|   ---------------------------------   |" << endl;
		cout << "\t\t\t\t|                                       |" << endl;
		cout << "\t\t\t\t|    DO you want to play again(Y/N)     |" << endl;
		cout << "\t\t\t\t|_______________________________________|" << endl;

		ch = _getch();
		if (ch == 'Y' || ch == 'y')
		{
			again = true;
		}
		system("cls");
		return again;
	}
};

class Game : public Template, public resource, public Score
{ // Main Body
private:
	int tries;

public:
	bool gameStutes;
	void song()
	{
		system("cls");

		cout << "\t\t	Derived Class song function. " << endl;
		system("pause");
		system("cls");
	}

	void getWords()
	{
	C:
		char D = '0';
		Level(D);
		if (D == '1')
		{
			ifstream file("Easy.txt");
			for (int i = 0; i < 99; i++)
			{
				file >> wordlist[i];
			}
			file.close();
		}
		else if (D == '2')
		{
			ifstream file("Medium.txt");
			for (int i = 0; i < 99; i++)
			{
				file >> wordlist[i];
			}
			file.close();
		}
		else if (D == '3')
		{
			ifstream file("Hard.txt");
			for (int i = 0; i < 99; i++)
			{
				file >> wordlist[i];
			}
			file.close();
		}
		else
		{
			goto C;
		}
	}

	void game()
	{

		if (Check == false)
		{
			sndPlaySound(TEXT("menu3.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
		}
		else
		{
			sndPlaySound(TEXT("Zero.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
		}
		gameStutes = false;
		c_guess = false;
		tries = 6;

		int ramdon_n = rand() % 100; // selecting a random word from string array
		word = wordlist[ramdon_n];
		string mys(word.length(), '*');

		int half = (word.length() / 2) - 1; // hints
		for (int i = 0; i <= half; i++)
		{
			int ramdon_n = rand() % word.length();
			mys[ramdon_n] = word[ramdon_n];
		}

		while (tries >= 0)
		{
			system("cls");
			c_guess = false; // Statues bar

			cout << "\t\t\tGamer Tag: " << c_Name << endl;
			cout << "\t|\t\tThere are " << mys.length() << " alphabets in this word. \t\t\t\t\t\t|" << endl;
			cout << "\t|\t\tGuesses left " << tries << "\t\t\t\t\t\t\t\t\t|" << endl;
			cout << "\t|\t\tGuess an alphabet. "
				 << "\t\t\t\t\t\t\t\t|" << endl;
			cout << "\t\t\tWord ( " << mys << " )" << endl;
			//			cout << "\t|\t\tThe word( " << word << " )\t\t\t\t\t\t\t\t|" << endl;
			cout << "\t-------------------------------------------------------------------------------------------------" << endl;
			display(tries);
			guess = _getche();

			for (int i = 0; i < mys.length(); i++) // checking alphabet in mys word
			{
				if (word[i] == guess)
				{
					mys[i] = guess;
					cout << "\n\t-------------------------------------------------------------------------------------------------" << endl;
					cout << "\t\tYes " << guess << " is one of the alphabets!" << endl;
					cout << "\t-------------------------------------------------------------------------------------------------" << endl;
					delay(5);
					c_guess = true;
				}
			}
			if (word == mys) // if player wins a level points are added in his score
			{

				sndPlaySound(TEXT("levelup.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);

				c_Level++;
				lives();
				gameStutes = true;
				display_LevelUp();
				delay(8);
				sndPlaySound(TEXT("Zero.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
				system("cls");
				break;
			}
			if (c_guess == false)
			{
				tries--;
			}
		}
		if (tries <= 0) // if tries <=0 player dieds score is updated if is in top 3 rank
		{
			updateScore();
			c_Level = 0;
			died();
			gameStutes = false;
		}
	}
};

int main()
{
	Game G;
	G.display_H();
	delay(10);
	G.display_Name();
	delay(10);

A:
	if (Check == false)
	{
		sndPlaySound(TEXT("menu3.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
	}
	else
	{
		sndPlaySound(TEXT("Zero.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
	}
	bool ch = true;
	int count = 1;
	char play = 0;
	system("cls");
	G.welcome(play);
	while (ch == true)
	{
		switch (play)
		{
		case '1':
		{
		B:
			if (count == 1)
			{
				if (Check == false)
				{
					sndPlaySound(TEXT("menu3.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
				}
				else
				{
					sndPlaySound(TEXT("Zero.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);
				}
				G.getWords();
				G.rules();
				G.inputName();
			}
			G.game();
			if (G.gameStutes == false)
			{			 // if game end and player wants to play again
				Game G1; // polymorphism
				resource *R;
				R = &G1;
				R->song();
				system("cls");
				ch = G.playagain();
				sndPlaySound(TEXT("Zero.wav"), SND_ASYNC | SND_NODEFAULT | SND_LOOP);

				if (ch == false)
				{
					system("cls");
					goto A;
				}
				else
				{			   // if game end and player doesnot wants to play again
					count = 1; // return main meun
					goto B;
				}
			}
			break;
		}
		case '2':
		{
			G.learderBoard(); // read score of top players
			goto A;
			break;
		}
		case '3':
		{
			system("COLOR 0A"); //	goes to exiting screen
			exit();
			break;
		}
		case 'm': //	goes to mute/ unmute music
		{
			if (Check == false)
			{
				Check = true;
			}
			else
			{
				Check = false;
			}
			goto A;
			break;
		}
		default:
		{
			goto A; // if player doesnot press 1,2,3 return main menu
			break;
		}
		}

		if (play != '1')
		{
			break;
		}

		count++;
	}

	return 0;
}
