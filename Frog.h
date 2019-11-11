#ifndef _FROG_H_
#define _FROG_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
#include "Animal.h"


class frog : public animal
{
private:
	string breed;
	string name;

public:
	frog();//default constructor
	frog(const frog &); //copy constructor
	frog(string, string, string, int, int); //class constructor
	~frog();
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

	inline bool operator == (const frog & rhs);
	bool operator < (const frog &);
	bool operator > (const frog &);
	bool operator != (const frog &);
	frog operator = (const frog &);
	string operator + (const frog &);

	friend ostream & operator <<(ostream &, const frog &);
	friend istream & operator >>(istream &, frog &);
};
#endif