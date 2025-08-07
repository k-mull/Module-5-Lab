#include "Pixel.h"
Pixel::Pixel()
{
	x = 0;
	y = 0;
	red = 0;
	green = 0;
	blue = 0;
	//img = 'a';
}
Pixel::Pixel(int x, int y, int red, int green, int blue, char img)
{
	this->x = x;
	this->y = y;
	this->green = green;
	this->red = red;
	this->blue = blue;
	//this->img = img;
}
int Pixel::getX()
{
	return x;
}
int Pixel::getY()
{
	return y;
}
int Pixel::getRed()
{
	return red;
}
int Pixel::getGreen()
{
	return green;
}
int Pixel::getBlue()
{
	return blue;
}
char Pixel::getImg()
{
	return img;
}
void Pixel::setX(int x)
{
	this->x = x;
}
void Pixel::setY(int y)
{
	this->y = y;
}
void Pixel::setRed(int red)
{
	this->red = red;
}
void Pixel::setGreen(int green)
{
	this->green = green;
}
void Pixel::setBlue(int blue)
{
	this->blue = blue;
}


ostream& operator<<(ostream& obj, Pixel& p)
{
	obj << p.img;
	return obj;
}