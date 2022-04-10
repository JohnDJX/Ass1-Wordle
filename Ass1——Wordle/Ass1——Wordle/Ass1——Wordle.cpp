// Ass1——Wordle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void Menu();
void Help();
void Statistics();
void Play();

int main() {
	Menu();
	return 0;
}

void Menu() {
	system("cls");         //clear the current interface
	bool option = true;
	bool var1 = true;       
	while (option == true) {
		if (var1 == true) {
			std::cout << "\n\t\tWelcome to WERDLE\n";
			std::cout << "\t\tSelect an option :\n";
			std::cout << "\n\t\t1. Play a game.\n";
			std::cout << "\t\t2. View Statistics.\n";
			std::cout << "\t\t3. View Help.\n";

			std::cout << ">";
		}
		char x;
		std::cin >> x;

		switch (x){
		case '1':               //Player pressed "1"

			Play();

			var1 = false;       //The main menu will not show together with the help page

			char a;             //After showing the page, press any key then enter to go back to the main menu.
			std::cin >> a;
			if (a) {
				system("cls");
				var1 = true;
			}
			break;
		
		case '2':               //Player pressed "2"

			Statistics();

			var1 = false;       //The main menu will not show together with the help page

			char b;             //After showing the page, press any key then enter to go back to the main menu.
			std::cin >> b;
			if (b) {
				system("cls");
				var1 = true;
			}

			break;

		case '3':               //Player pressed "3"
			
			Help();             //Show the help page
			
			var1 = false;       //The main menu will not show together with the help page
			
			char c;             //After showing the page, press any key then enter to go back to the main menu.
			std::cin >> c;
			if (c) {
				system("cls");
				var1 = true;
			}
			break;

		default:                //Invalid input 
			
			break;

		}

		
	}
}
void Help() {              //view help page
	system("cls");        //clear the current interface
	std::cout << "\n\t\tGuess the WERDLE in six tries.\n";
	std::cout << "\n\t\tEach guess must be a five - letter word.Hit the enter button to submit.\n";
	std::cout << "\n\t\tExamples\n";
	std::cout << "\n\t\t[A] P P L E\n";
	std::cout << "\n\t\tThe letter A is in the correct position.\n";
	std::cout << "\n\t\tD | E | A L T\n";
	std::cout << "\n\t\tThe letter E is in the word but in the wrong position.\n";
	std::cout << "\n\t\tPress any key then enter to go back to Main Menu.\n";
}
void Statistics() {
	system("cls");
	std::cout << "\n\t\tPlayed: x   Win%: x  Current Streak: x  Max Streak: x\n";
	std::cout << "\n\t\tGUESS Distribution\n";
	std::cout << "\n\t\tPress any key then enter to go back to Main Menu.\n";
}
void Play() {
	system("cls");
	std::cout << "\n\t\tGame Start!\n";
	std::cout << "\n\t\tPress any key then enter to go back to Main Menu.\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
