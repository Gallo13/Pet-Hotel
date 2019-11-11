#include<iostream>
#include "Fish.h"
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//default constructor 
fish::fish() : name("unk"), breed("unk"), animal("fish") {}
//Class constructor
fish::fish(string N, string S, string B, int A, int W) : animal
(S, A, W), name(N), breed(B) {}
//copy constructor
void fish::move()
{
	cout << "Swim, swim.\n ";
}

void fish::speak()
{
	cout << "Blub, blub.\n";
}

void fish::eat()
{
	cout << "Nom, nom!.\n";
}

bool fish::operator ==(const fish & rhs)
{
	return breed == rhs.breed;
}

string fish::operator  + (const fish & rhs)
{
	return breed + rhs.breed;
}

bool fish::operator != (const fish & rhs)
{
	return breed != rhs.breed;

}

bool fish::operator > (const fish & rhs)
{
	return breed > rhs.breed;

}

bool fish::operator < (const fish & rhs)
{
	return breed <  rhs.breed;
}

ostream & operator <<(ostream & out, const fish & fish)

{
	out << fish.breed << "" << fish.name << endl;
	return out;
}

istream & operator >> (istream & in, fish & fish)
{
	cout << "Enter breed:";
	in >> fish.breed;
	cout << "Enter name:";
	in >> fish.name;

	return in;
}