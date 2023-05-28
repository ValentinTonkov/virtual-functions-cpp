#include <iostream>
using namespace std;

class Shape{
public:
    virtual double getArea() = 0;
};

class Rect : public Shape{
private:
    double a, b;
public:
    Rect(double a, double b)  {
        this->a = a;
        this->b = b;
    }

    double getArea() override{
        return a*b;
    }
};

class Circle : public Shape{
private:
    double r;
public:
    explicit Circle(double r)  {
        this -> r = r;
    }

    double getArea()  override{
        return 3.14*r*r;
    }
};


int main() {

    Circle c1(12);
    Rect r1(12, 23);
    Rect r2(12, 23);

    Shape* shapes[3];
    shapes[0] = &c1;
    shapes[1] = &r1;
    shapes[2] = &r2;

    for (Shape* shape : shapes){
        cout<<shape->getArea()<<endl;
    }

    return 0;
}
