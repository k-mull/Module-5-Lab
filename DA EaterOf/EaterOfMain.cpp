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
	EaterOf operator+(EaterOf& right)
	{
		EaterOf result;
		result = this->sum + right.sum;
		return result;
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
int main()
{
	EaterOf<int> intEaters;
	EaterOf<double> DoubleEaters;
	EaterOf<string> stringEaters;

	intEaters.eat(3);
	DoubleEaters.eat(3.33);
	stringEaters.eat("3");

	cout << "Int burp: " << intEaters.burp() << endl;
	cout << "Double burp: " << DoubleEaters.burp() << endl;
	cout << "String burp: " << stringEaters.burp() << endl;

}