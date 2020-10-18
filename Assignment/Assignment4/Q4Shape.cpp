#include<iostream>
using namespace std;

class Shape{
public:
    Shape()
    {
        cout<<"Shape"<<endl;
    }
};

class TwoDShape:public Shape
{
public:
    TwoDShape()
    {
        cout<<"TwoDimensional Shape"<<endl;
    }
};

class ThreeDShape:public Shape
{
public:
    ThreeDShape()
    {
        cout<<"ThreeDimensional Shape"<<endl;
    }
};

class Square:public TwoDShape{
public:
    void calculateArea()
    {
        int a;
        cout<<"Square"<<endl;
        cout<<"Enter side:"<<endl;
        cin>>a;
        cout<<"Area of Square:"<<a*a<<endl;
    }
};

class Rectangle:public TwoDShape{
public:
    void calculateArea()
    {
        int l,b;
        cout<<"Rectangle"<<endl;
        cout<<"Enter length:"<<endl;
        cin>>l;
        cout<<"Enter breadth:"<<endl;
        cin>>b;
        cout<<"Area:"<<l*b<<endl;
    }
};

class Triangle:public TwoDShape{
public:
    void calculateArea()
    {
        int b,h;
        cout<<"Triangle"<<endl;
        cout<<"Enter base:"<<endl;
        cin>>b;
        cout<<"Enter height:"<<endl;
        cin>>h;
        cout<<"Area:"<<(1/2)*(b*h)<<endl;
    }
};

class Circle:public TwoDShape{
public:
    void calculateArea()
    {
        int r;
        cout<<"Circle"<<endl;
        cout<<"Enter radius:"<<endl;
        cin>>r;
        cout<<"Area of Circle:"<<3.14*r*r<<endl;
    }

};

class Sphere:public ThreeDShape{
public:
    void calculateVolume()
    {
        int r;
        cout<<"Sphere"<<endl;
        cout<<"Enter radius:"<<endl;
        cin>>r;
        cout<<"Volume of Sphere:"<<(4/3)*(3.14*r*r*r)<<endl;
    }

};

class Cube:public ThreeDShape{
public:
    void calculateVolume()
    {
        int a;
        cout<<"Cube"<<endl;
        cout<<"Enter side:"<<endl;
        cin>>a;
        cout<<"Volume of Cube:"<<a*a*a<<endl;
    }
};

class Cone:public ThreeDShape{
public:
    void calculateVolume()
    {
        int r,h;
        cout<<"Cone"<<endl;
        cout<<"Enter radius:"<<endl;
        cin>>r;
        cout<<"Enter height:"<<endl;
        cin>>h;
        cout<<"Volume of Cone:"<<(1/3)*(3.14*r*r*h)<<endl;
    }
};
int main()
{
    int n,ch;
    char choice;
    do
    {
        cout<<"MENU:\n1-TwoDShape\n2-ThreeDShape\n3-Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"MENU:\n1-Square\n2-Rectangle\n3-Triangle\n4-Circle"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:{
                        Square s;
                        s.calculateArea();
                       }
                       break;
                case 2:{
                        Rectangle r;
                        r.calculateArea();
                       }
                       break;
                case 3:{
                        Triangle t;
                        t.calculateArea();
                       }
                       break;
                case 4:{
                        Circle c;
                        c.calculateArea();
                       }
                       break;
                default:cout<<"Invalid choice"<<endl;
            }
        }
        else if(n==2)
        {
            cout<<"MENU:\n1-Sphere\n2-Cube\n3-Cone"<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1:{
                        Sphere s;
                        s.calculateVolume();
                       }
                       break;
                case 2:{
                        Cube c;
                        c.calculateVolume();
                       }
                       break;
                case 3:{
                        Cone co;
                        co.calculateVolume();
                       }
                       break;
                default:cout<<"Invalid choice"<<endl;
            }
        }
        else if(n==3)
        {
            exit(0);
        }
        else
        {
            cout<<"Invalid Choice:";
        }
        cout<<"Do you want to Continue:Y or N"<<endl;
        cin>>choice;
    }while(choice=='Y' || choice=='y');
}
