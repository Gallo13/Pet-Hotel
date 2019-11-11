#include<iostream>
#include "Frog.h"
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//default constructor 
frog::frog() : name("unk"), breed("unk"), animal("frog") {}
//Class constructor
frog::frog(string N, string S, string B, int A, int W) : animal
(S, A, W), name(N), breed(B) {}
//copy constructor
void frog::move()
{
	cout << "Hop, hop.\n ";
}

void frog::speak()
{
	cout << "Ribbit, ribbit.\n";
}

void frog::eat()
{
	cout << "Nom, nom!.\n";
}

bool frog::operator ==(const frog & rhs)
{
	return breed == rhs.breed;
}

string frog::operator  + (const frog & rhs)
{
	return breed + rhs.breed;
}

bool frog::operator != (const frog & rhs)
{
	return breed != rhs.breed;

}

bool frog::operator > (const frog & rhs)
{
	return breed > rhs.breed;

}

bool frog::operator < (const frog & rhs)
{
	return breed <  rhs.breed;
}

ostream & operator <<(ostream & out, const frog & frog)

{
	out << frog.breed << "" << frog.name << endl;
	return out;
}

istream & operator >> (istream & in, frog & frog)
{
	cout << "Enter breed:";
	in >> frog.breed;
	cout << "Enter name:";
	in >> frog.name;

	return in;
}