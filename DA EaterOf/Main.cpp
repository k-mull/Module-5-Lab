#include <iostream>
#include "EaterOf.h"
#include "PicReader.h"
#include "Pixel.h"
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int findLowestPrimeFactor(int num)
{
	if (num <= 1)
		return 0;
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return i;
	return num;
}

vector<int> getPrimeFactors(int num)
{

	vector<int> factors;

	if (num <= 1)
		return factors;

	int lowest = findLowestPrimeFactor(num);

	if (lowest == 0)
	{

		factors.push_back(num);
	}
	else
	{
		factors.push_back(lowest);
		vector<int> otherFactors = getPrimeFactors(num / lowest);
		factors.insert(factors.end(), otherFactors.begin(), otherFactors.end());
	}
	return factors;
}
int main()
{
	//EaterOf DA
	EaterOf<int> intEaters;
	EaterOf<double> DoubleEaters;
	EaterOf<string> stringEaters;

	

	intEaters.eat(3);
	DoubleEaters.eat(3.33);
	stringEaters.eat("3");

	cout << "Int burp: " << intEaters.burp() << endl;
	cout << "Double burp: " << DoubleEaters.burp() << endl;
	cout << "String burp: " << stringEaters.burp() << endl;



	//Prime Factors DA
	int num;
	cout << "enter a positive integer. " << endl;
	cin >> num;

	vector<int> primeFactors;
	primeFactors = getPrimeFactors(num);

	cout << "prime factors of " << num << ": ";
	for (int f : primeFactors)
	{
		cout << f << " ";
	}
	cout << endl;

	//Colors DA
	vector<Pixel> pixels;
	PicReader reader;
	pixels = reader.readPic("colors.txt");

	for (Pixel p : pixels)
	{
		cout << p;
		// cout << endl; 
	}
}