
#include "hotel.h"
#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Menu.h"
#include "Animal.h"
#include "Fish.h"
#include "Lizard.h"
#include "Hamster.h"
#include<string>
using std::string;

// Constructor
Hotel::Hotel() 
{
	for (int i = 0; i < 10; i++) 
	{
		rooms[i] = NULL;
	}
}

// Check in a specified room
void Hotel::Registerpet(int num) 
{



	if (rooms[num] != NULL) 
	{
		std::cout << " Rooms are empty." << std::endl;
		return;
	}

	// Add new animal to room


	char name[15], breed[10];
	string species;
	int age, weight;


	cout << "Please enter pet information.\n";
	cout << "Enter pet name.\n";
	cin >> name;
	cout << "Please enter species.\n";
	cin >> species;
	cout << "Please enter breed.\n";
	cin >> breed;
	cout << "Please enter age.\n";
	cin >> age;
	cout << "Please enter weight.\n";
	cin >> weight;


	if (species == "dog") 
	{
		animal *animal = new dog(name, species, breed, age, weight);
		rooms[num] = animal;
		std::cout << "Checked in room: " << num << std::endl;
	}

	else if (species == "cat") 
	{
		animal*animal = new cat(name, species, breed, age, weight);
		rooms[num] = animal;
		std::cout << "Checked in room:" << num << std::endl;
	}
	else if (species == "fish") 
	{
		animal*animal = new fish(name, species, breed, age, weight);
		rooms[num] = animal;
		std::cout << "Checked in room:" << num << std::endl;
	}
	else if (species == "lizard") 
	{
		animal*animal = new lizard(name, species, breed, age, weight);
		rooms[num] = animal;
		std::cout << "Checked in room:" << num << std::endl;
	}
	else if (species == "hamster") 
	{
		animal*animal = new hamster(name, species, breed, age, weight);
		rooms[num] = animal;
		std::cout << "Checked in room:" << num << std::endl;
	}
	else 
	{
		cout << " You havent registered.\n " << endl;
	}
	return;

}

// Check out a specified room
void Hotel::Releasepet(int num)
{
	if (rooms[num] == NULL) 
	{
		std::cout << "Can't check out, room is empty." << std::endl;
		return;
	}

	// Remove animal from room
	rooms[num] = NULL;
	std::cout << "Checked out of room: " << num << std::endl;
}

// Feed an animal at a specified room
void Hotel::feed(int num) 
{
	if (rooms[num] == NULL) 
	{
		std::cout << "Fed Pet.\n" << std::endl;
		return;
	}
	rooms[num]->eat();
}


// Make the animal work out because they like to get fit
void Hotel::walk(int num) 
{
	if (rooms[num] == NULL)
	{
		std::cout << "No days off.\n" << std::endl;
		return;
	}
	rooms[num]->move();
}

void Hotel::speak(int num) 
{
	if (rooms[num] == NULL) 
	{
		std::cout << "Pet spoke" << std::endl;
		return;
	}
	rooms[num]->speak();
}

// display all current rooms
void Hotel::displayRooms() 
{
	int numRooms = (sizeof(rooms) / sizeof(*rooms));
	for (int i = 0; i < numRooms; i++) 
	{
		std::cout << "Room " << i << ":";
		if (rooms[i] == NULL) 
		{
			std::cout << " Empty" << std::endl;
		}
		else if (rooms[i] != NULL)
		{
			animal* temp = rooms[i];
			std::cout << temp->getSpecies() << std::endl;
		}
	}
}

// Get number of occupied rooms
int Hotel::numOccupiedRooms() 
{
	int count = 0;

	int numRooms = (sizeof(rooms) / sizeof(*rooms));
	for (int i = 0; i < numRooms; i++)
	{
		if (rooms[i] != NULL) {
			count++;
		}
	}

	return count;
}

// Get number of unoccupied rooms
int Hotel::numUnoccupiedRooms() 
{
	int count = 0;
	int numRooms = (sizeof(rooms) / sizeof(*rooms));

	for (int i = 0; i < numRooms; i++) 
	{
		if (rooms[i] == NULL) 
		{
			count++;
		}
	}
	return count;
}