#ifndef _HAMSTER_H_
#define _HAMSTER_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
#include "Animal.h"


class hamster : public animal
{
	private:
		string breed;
		string name;

	public:
		hamster();//default constructor
		hamster(const hamster &); //copy constructor
		hamster(string, string, string, int, int); //class constructor
		~hamster();
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

		inline bool operator == (const hamster & rhs);
		bool operator < (const hamster &);
		bool operator > (const hamster &);
		bool operator != (const hamster &);
		hamster operator = (const hamster &);
		string operator + (const hamster &);

		friend ostream & operator <<(ostream &, const hamster &);
		friend istream & operator >>(istream &, hamster &);
};
#endif