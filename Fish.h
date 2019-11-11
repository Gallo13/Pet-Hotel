#ifndef _FISH_H_
#define _FISH_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
#include "Animal.h"


class fish : public animal
{
private:
	string breed;
	string name;

public:
	fish();//default constructor
	fish(const fish &); //copy constructor
	fish(string, string, string, int, int); //class constructor
	~fish();
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

	inline bool operator == (const fish & rhs);
	bool operator < (const fish &);
	bool operator > (const fish &);
	bool operator != (const fish &);
	fish operator = (const fish &);
	string operator + (const fish &);

	friend ostream & operator <<(ostream &, const fish &);
	friend istream & operator >>(istream &, fish &);
};
#endif