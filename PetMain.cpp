
#include <iostream>
#include "Menu.h"
#include "Hotel.h"
#include "Animal.h"

// Function prototypes
void runMenuSelection(int option);
void getRoomNumberRegisterpet();
void getRoomNumberReleasepet();
void getRoomNumberToFeed();
void getRoomNumberToWalk();
void speakpet();
void exitProgram();

// Main objects
Hotel *hotel = NULL;
Menu *menu = NULL;

// Main
int main(int argc, char *argv[]) 
{
	hotel = new Hotel();
	menu = new Menu();

	while (1) 
	{
		int choice = menu->displayMenu();
		runMenuSelection(choice);
	}
	return 0;
}

/* Run the displayed menu selection  */
void runMenuSelection(int option) 
{
	switch (option)
	{
	case 1: getRoomNumberRegisterpet(); break;

	case 2: getRoomNumberReleasepet(); break;

	case 3: getRoomNumberToFeed(); break;

	case 4: getRoomNumberToWalk(); break;

	case 5: hotel->displayRooms(); break;

	case 6: speakpet(); break;
	case 7: exitProgram(); break;

	default:
		std::cout << "Value out of range enter 1 - 7 only.\n";
		break;
	}
}

// 1
void getRoomNumberRegisterpet() 
{
	int index = menu->displayRegisterpet();
	hotel->Registerpet(index);
}

// 2
void getRoomNumberReleasepet() 
{
	int index = menu->displayRegisterpet();
	hotel->Releasepet(index);
}

// 3
void getRoomNumberToFeed() 
{
	int index = menu->displayfeed();
	hotel->feed(index);
}

// 4
void getRoomNumberToWalk() 
{
	int index = menu->displaywalk();
	hotel->walk(index);
}

void speakpet() 
{
	int index = menu->displayspeak();
	hotel->speak(index);
}

/* Exit the program  */
void exitProgram() 
{
	char response;

	std::cout << std::endl;
	std::cout << "\t\t\t\tAre you sure you want to quit? Y/N:";
	std::cin >> response;

	if (response == 'y' || response == 'Y') 
	{
		exit(1);
	}
}