#include<iostream>
#include "Dog.h"
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//default constructor 
dog::dog() : name("unk"), breed("unk"), animal("dog") {}
//Class constructor
dog::dog(string N, string S, string B, int A, int W) : animal(S, A, W), name(N), breed(B) {}
//copy constructor
void dog::move()
{
	cout << "Pounce, pounce.\n ";
}

void dog::speak()
{
	cout << "Bark, bark.\n";
}

void dog::eat()
{
	cout << "MMMM yummy kibbles!.\n";
}

bool dog::operator ==(const dog & rhs)
{
	return breed == rhs.breed;
}

string dog::operator  + (const dog & rhs)
{
	return breed + rhs.breed;
}

bool dog::operator != (const dog & rhs)
{
	return breed != rhs.breed;

}

bool dog::operator > (const dog & rhs)
{
	return breed > rhs.breed;

}

bool dog::operator < (const dog & rhs)
{
	return breed <  rhs.breed;
}

ostream & operator <<(ostream & out, const dog & dog)

{
	out << dog.breed << "" << dog.name << endl;
	return out;
}

istream & operator >> (istream & in, dog & dog)
{
	cout << "Enter breed:";
	in >> dog.breed;
	cout << "Enter name:";
	in >> dog.name;

	return in;
}