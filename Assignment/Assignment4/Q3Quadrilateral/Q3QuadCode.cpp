#include<iostream>
using namespace std;

class Quadrilateral{
public:
    Quadrilateral()
    {
        cout<<"Quadrilateral"<<endl;
    }
};

class Trapezoid:public Quadrilateral{
private:
    int a,b1,b2,c,h;
public:
    Trapezoid(int a,int b1,int b2,int c,int h)
    {
        this->a=a;
        this->b1=b1;
        this->b2=b2;
        this->c=c;
        this->h=h;
    }
    void calculateArea()
    {
        cout<<"Trapezoid"<<endl;
        cout<<"Area of Trapezoid:"<<(b1+b2)*h/2<<endl;
    }
    void calculatePer()
    {
        cout<<"Perimeter of Trapezoid:"<<(a+b1+b2+c)<<endl;
    }

};

class Parallelogram:public Quadrilateral{
public:
    Parallelogram()
    {
        cout<<"Parallelogram"<<endl;
    }
};

class Rectangle:public Parallelogram
{
private:
    int l,b;
public:
    Rectangle(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    void calculateArea()
    {
        cout<<"Area of Rectangle:"<<l*b<<endl;
    }
    void calculatePer()
    {
        cout<<"Perimeter of Rectangle:"<<2*(l+b)<<endl;
    }
};

class Square:public Parallelogram{
private:
    int a;
public:
    Square(int a)
    {
        this->a=a;
    }
    void calculateArea()
    {
        cout<<"Area of Square:"<<a*a<<endl;
    }
    void calculatePer()
    {
        cout<<"Perimeter of Square:"<<4*a<<endl;
    }

};

int main()
{
    Trapezoid t(8,3,11,10,7);
    t.calculateArea();
    t.calculatePer();
    cout<<"\n\n";
    Square s(10);
    s.calculateArea();
    s.calculatePer();
    cout<<"\n\n";
    Rectangle r(10,20);
    r.calculateArea();
    r.calculatePer();

}
