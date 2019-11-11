
#ifndef HOTEL_H
#define HOTEL_H

#include "Animal.h"
#include "Dog.h"

class Hotel 
{
	private:
		animal *rooms[10];

	public:
		Hotel();
		void Registerpet(int);
		void Releasepet(int);
		void displayRooms();
		void feed(int);
		void walk(int);
		void speak(int);

		int numOccupiedRooms();
		int numUnoccupiedRooms();
};

#endif