#ifndef EATEROFF_H
#define EATEROFF_H

#include <iostream>
using namespace std;

template<class T>
class EaterOf
{
private:
	T sum;
public:

	EaterOf<T>()
	{
		sum = T();
	}

	
	void eat(T food)
	{

		cout << "nom-nom" << endl;
		sum = sum + food;

	}


	T burp()
	{
		return sum;
	}


};
#endif
