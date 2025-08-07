#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
using namespace std;
class Pixel
{
private:
	int x;
	int y;
	int red;
	int green;
	int blue;
	const char img = 'a';
public:
	Pixel();
	Pixel(int x, int y, int red, int green, int blue, char img);
	int getX();
	int getY();
	int getRed();
	int getGreen();
	int getBlue();
	char getImg();
	void setX(int x);
	void setY(int y);
	void setRed(int red);
	void setGreen(int green);
	void setBlue(int blue);
	//void setImg(char img);

	friend ostream& operator<<(ostream& obj, Pixel& p);
};
#endif


