#ifndef _LIZARD_H_
#define _LIZARD_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
#include "Animal.h"


class lizard : public animal
{
private:
	string breed;
	string name;

public:
	lizard();//default constructor
	lizard(const lizard &); //copy constructor
	lizard(string, string, string, int, int); //class constructor
	~lizard();
	void move();
	void eat();
	void speak();

	string getName()
	{
		return getName();
	}
	string getBreed()
	{
		return getBreed();
	}

	inline bool operator == (const lizard & rhs);
	bool operator < (const lizard &);
	bool operator > (const lizard &);
	bool operator != (const lizard &);
	lizard operator = (const lizard &);
	string operator + (const lizard &);

	friend ostream & operator <<(ostream &, const lizard &);
	friend istream & operator >>(istream &, lizard &);
};
#endif