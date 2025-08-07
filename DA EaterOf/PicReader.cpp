#include "PicReader.h"
PicReader::CoordinateOutOfRangeException::CoordinateOutOfRangeException(int coordValue)
{
    this->coordValue = coordValue;
}
int PicReader::CoordinateOutOfRangeException::getCoordValue()
{
    return coordValue;
}

PicReader::ColorVectorOutOfRangeException::ColorVectorOutOfRangeException(int coordValue)
{
    this->coordValue = coordValue;
}
int PicReader::ColorVectorOutOfRangeException::getCoordValue()
{
    return coordValue;
}
vector<Pixel> PicReader::readPic(string fileName)
{
    vector<Pixel> pixels;

    ifstream file(fileName);

    if (!file.is_open())
    {
        cout << "cannot open file." << endl;
    }

    int x;
    int y;
    int r;
    int g;
    int b;

    char img;

    while (file >> x >> y >> r >> g >> b >> img)
    {
        if (x < 0)
        {
            cout << "error " << endl;
            cout << "x = " << x << endl;

        }
        if (y < 0)
        {
            cout << "error " << endl;
            cout << "y = " << y << endl;
        }



        if (r < 0)
        {
            cout << "error " << endl;
            cout << "r = " << r << endl;
            r = 0;
        }
        else if (r > 255)
        {
            cout << "error " << endl;
            cout << "r = " << r << endl;
            r = 255;
        }



        if (g < 0)
        {
            cout << "error " << endl;
            cout << "g = " << g << endl;
            g = 0;
        }
        else if (g > 255)
        {
            cout << "error " << endl;
            cout << "g = " << g << endl;
            g = 255;
        }



        if (b < 0)
        {
            cout << "error " << endl;
            cout << "b = " << b << endl;
            b = 0;
        }
        else if (b > 255)
        {
            cout << "error " << endl;
            cout << "b = " << b << endl;
            b = 255;
        }
        pixels.emplace_back(x, y, r, g, b, img);
    }


    return pixels;
}
