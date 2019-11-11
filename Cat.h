#ifndef _CAT_H_
#define _CAT_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
#include "Animal.h"


class cat : public animal 
{
	private:
		string breed;
		string name;

	public:
		cat();//default constructor
		cat(const cat &); //copy constructor
		cat(string, string, string, int, int); //class constructor
		~cat();
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

		inline bool operator == (const cat & rhs);
		bool operator < (const cat &);
		bool operator > (const cat &);
		bool operator != (const cat &);
		cat operator = (const cat &);
		string operator + (const cat &);

		friend ostream & operator <<(ostream &, const cat &);
		friend istream & operator >>(istream &, cat &);
};
#endif