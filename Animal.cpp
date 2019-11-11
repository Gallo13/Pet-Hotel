
#include<iostream>
using std::endl;
using std::cout;
using std::ostream;
using std::istream;
#include "animal.h"
#include<string>
using std::string;


animal::animal() :species("Unk"), age(0), weight(0) {}
animal::animal(string S, int A, int W) : species(S), age(A), weight(W) {}
animal::animal(string S) : species(S), age(0), weight(0) {}


void move() 
{

	cout << "Pet is moving.\n";
}

void speak()
{
	cout << "Pet consumes food.\n";

}

void walk()
{
	cout << "Pet is speaking.\n";
}

inline bool animal::operator ==(const animal & rhs)
{
	return weight == rhs.weight;
}

int animal::operator  + (const animal & rhs)
{
	return weight + rhs.weight;
}

bool animal::operator != (const animal & rhs)
{
	return weight != rhs.weight;

}

bool animal::operator > (const animal & rhs)
{
	return (weight > rhs.weight);

}

bool animal::operator < (const animal & rhs)
{
	return (weight <  rhs.weight);
}

ostream & operator <<(ostream & out, const animal & A)

{
	out << A.species << "" << endl
		<< A.weight << "" << A.age << endl;
	return out;
}

istream & operator >> (istream & in, animal & A)
{
	cout << "Enter species:";
	in >> A.species;
	cout << "Enter age:";
	in >> A.age;
	cout << "Enter weight:";
	in >> A.weight;
	cout << "pet eats";

	return in;
}