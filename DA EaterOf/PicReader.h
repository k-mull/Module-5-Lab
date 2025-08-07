#ifndef PICREADER_H
#define PICREADER_H
#include <iostream>
#include <vector>
#include "Pixel.h"
#include <fstream>
using namespace std;

class PicReader
{
private:

public:
	class CoordinateOutOfRangeException
	{
	private:
		int coordValue;
	public:
		CoordinateOutOfRangeException(int coordValue);
		int getCoordValue();

	};
	class ColorVectorOutOfRangeException
	{
	private:
		int coordValue;
	public:
		ColorVectorOutOfRangeException(int coordValue);
		int getCoordValue();
	};
	static vector<Pixel> readPic(string fileName);
};
#endif

