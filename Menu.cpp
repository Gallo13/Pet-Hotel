
#include <iostream>
#include "Menu.h"

using std::cout;
using std::cin;
using std::endl;
Menu::Menu() {}

int Menu::displayMenu() 
{
	int option;

	cout << "\t\t\t\tWelcome to the Animal Hotel" << endl;
	cout << "\t\t\t----------------------------------------" << endl;
	cout << "\t\t\t1) Register Pet" << endl;
	cout << "\t\t\t2) Release Pet " << endl;
	cout << "\t\t\t3) Feed Pet" << endl;
	cout << "\t\t\t4) walk Pet" << endl;
	cout << "\t\t\t5) Display Rooms" << endl;
	cout << "\t\t\t6) Pets Speak" << endl;
	cout << "\t\t\t7) Close Hotel" << endl;
	cout << "\t\t\t----------------------------------------" << endl;
	cout << "\t\t\tChose any of them: ";

	cin >> option;

	return option;
}

int Menu::displayRegisterpet() 
{
	return getDisplayInputWithString("Please enter the room you would like to Register: ");
}

int Menu::displayReleasepet() 
{
	return getDisplayInputWithString("Please enter the room you would like to Release: ");
}

int Menu::displayfeed() 
{
	return getDisplayInputWithString("Please enter the room you would like to feed: ");
}

int Menu::displaywalk()
{
	return getDisplayInputWithString("Please enter the room you would like to workout: ");
}

int Menu::displayspeak()
{
	return getDisplayInputWithString("please enter the room where you would like to speak: ");
}

// Convenience
int Menu::getDisplayInputWithString(const std::string& input)
{
	int option;

	cout << input << ":";
	cin >> option;

	return option;
}