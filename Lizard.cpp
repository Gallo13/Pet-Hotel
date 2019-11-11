#include<iostream>
#include "Lizard.h"
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//default constructor 
lizard::lizard() : name("unk"), breed("unk"), animal("lizard") {}
//Class constructor
lizard::lizard(string N, string S, string B, int A, int W) : animal(S, A, W), name(N), breed(B) {}
//copy constructor
void lizard::move()
{
	cout << "Swim, swim.\n ";
}

void lizard::speak()
{
	cout << "Blub, blub.\n";
}

void lizard::eat()
{
	cout << "Nom, nom!.\n";
}

bool lizard::operator ==(const lizard & rhs)
{
	return breed == rhs.breed;
}

string lizard::operator  + (const lizard & rhs)
{
	return breed + rhs.breed;
}

bool lizard::operator != (const lizard & rhs)
{
	return breed != rhs.breed;

}

bool lizard::operator > (const lizard & rhs)
{
	return breed > rhs.breed;

}

bool lizard::operator < (const lizard & rhs)
{
	return breed <  rhs.breed;
}

ostream & operator <<(ostream & out, const lizard & lizard)

{
	out << lizard.breed << "" << lizard.name << endl;
	return out;
}

istream & operator >> (istream & in, lizard & lizard)
{
	cout << "Enter breed:";
	in >> lizard.breed;
	cout << "Enter name:";
	in >> lizard.name;

	return in;
}