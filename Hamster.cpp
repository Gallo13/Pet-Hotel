#include<iostream>
#include "Hamster.h"
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//default constructor 
hamster::hamster() : name("unk"), breed("unk"), animal("hamster") {}
//Class constructor
hamster::hamster(string N, string S, string B, int A, int W) : animal
(S, A, W), name(N), breed(B) {}
//copy constructor
void hamster::move()
{
	cout << "Scurry, scurry.\n ";
}

void hamster::speak()
{
	cout << "Twitch, twitch.\n";
}

void hamster::eat()
{
	cout << "Nom, nom!.\n";
}

bool hamster::operator ==(const hamster & rhs)
{
	return breed == rhs.breed;
}

string hamster::operator  + (const hamster & rhs)
{
	return breed + rhs.breed;
}

bool hamster::operator != (const hamster & rhs)
{
	return breed != rhs.breed;

}

bool hamster::operator > (const hamster & rhs)
{
	return breed > rhs.breed;

}

bool hamster::operator < (const hamster & rhs)
{
	return breed <  rhs.breed;
}

ostream & operator <<(ostream & out, const hamster & hamster)

{
	out << hamster.breed << "" << hamster.name << endl;
	return out;
}

istream & operator >> (istream & in, hamster & hamster)
{
	cout << "Enter breed:";
	in >> hamster.breed;
	cout << "Enter name:";
	in >> hamster.name;

	return in;
}