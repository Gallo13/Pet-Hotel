
#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include<iostream>
using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;


class animal 
{
	private:
		string species;
			int age;
	int weight;

	public:
		animal();
		animal(string, int, int);
		animal(string);
		animal(const animal &);
		// accessor functions
		string getSpecies() { return species; }//inline
		int getAge() { return age; }//inline
		int getWeight(){ return weight; }//inline


		virtual void move(){}
		virtual void eat(){}
		virtual void speak(){}

		inline bool operator == (const animal &);
		bool operator != (const animal &);
		bool operator > (const animal &);
		bool operator < (const animal &);
		int operator +(const animal &);
		animal operator =(const animal &);
		friend ostream & operator <<(ostream &, const animal &);
		friend istream & operator >>(istream &, animal &);
};
#endif 