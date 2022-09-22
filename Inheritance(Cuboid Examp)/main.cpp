#include <iostream>

using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    void setLength(int l);
    void setBreadth(int b);

    int area();
    int perimeter();

    bool isSquare();
    ~Rectangle();

};

class Cuboid : public Rectangle
{
    private:
    int height;

    public:
    Cuboid(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};

int main()
{
    Cuboid c(2);

    c.setLength(5);
    c.setBreadth(10);

    cout<<"Volume of cuboid is: "<<c.volume()<<endl;

    return 0;
}

Rectangle::Rectangle()             //default comstructor
{
    length=1;
    breadth=1;
}

Rectangle::Rectangle(int l, int b)    //parameteised constructor
{
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r)    //copy constructor
{
    length=r.length;
    length=r.breadth;
}

void Rectangle::setLength(int l)
{
    length=l;
}

void Rectangle::setBreadth(int b)
{
    breadth=b;
}


int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length + breadth);
}

bool Rectangle:: isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle is distroyed";
}

