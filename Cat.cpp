#include<iostream>
#include "Cat.h"
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//default constructor 
cat::cat() : name("unk"), breed("unk"), animal("cat") {}
//Class constructor
cat::cat(string N, string S, string B, int A, int W) : animal(S, A, W), name(N), breed(B) {}
//copy constructor
void cat::move()
{
	cout << "Slink, slinkk.\n ";
}

void cat::speak()
{
	cout << "Meow, Meow.\n";
}

void cat::eat()
{
	cout << "MMMM yummy tunafish!.\n";
}

bool cat::operator ==(const cat & rhs)
{
	return breed == rhs.breed;
}

string cat::operator  + (const cat & rhs)
{
	return breed + rhs.breed;
}

bool cat::operator != (const cat & rhs)
{
	return breed != rhs.breed;

}

bool cat::operator > (const cat & rhs)
{
	return breed > rhs.breed;

}

bool cat::operator < (const cat & rhs)
{
	return breed <  rhs.breed;
}

ostream & operator <<(ostream & out, const cat & cat)

{
	out << cat.breed << "" << cat.name << endl;
	return out;
}

istream & operator >> (istream & in, cat & cat)
{
	cout << "Enter breed:";
	in >> cat.breed;
	cout << "Enter name:";
	in >> cat.name;

	return in;
}