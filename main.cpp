#include <iostream>

using namespace std;

// Base class
class Shape 
{
public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;

    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

class Triangle : public Shape
{
public:
    int getArea()
    { 
        return (width * height) / 2;
    }
};

// New Circle class
class Circle : public Shape
{
public:
    int getArea()
    {
        // width represents the radius
        return 3.14 * width * width;
    }
};

int main()
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    cout << "Total Triangle area: " << Tri.getArea() << endl;

    Circle cir;
    cir.setWidth(5);   // radius

    cout << "Total Circle area: " << cir.getArea() << endl;

    return 0;
}
