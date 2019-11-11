#ifndef _DOG_H_
#define _DOG_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
#include "Animal.h"


class dog : public animal
{
	private:
		string breed;
		string name;

	public:
		dog();//default constructor
		dog(const dog &); //copy constructor
		dog(string, string, string, int, int); //class constructor
		~dog();
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

		inline bool operator == (const dog & rhs);
		bool operator < (const dog &);
		bool operator > (const dog &);
		bool operator != (const dog &);
		dog operator = (const dog &);
		string operator + (const dog &);

		friend ostream & operator <<(ostream &, const dog &);
		friend istream & operator >>(istream &, dog &);
};
#endif