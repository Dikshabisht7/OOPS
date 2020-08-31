#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    friend bool operator ==(Complex const &,Complex const &);
    friend bool operator !=(Complex const &,Complex const &);
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
};

bool operator ==(Complex const &obj1,Complex const &obj2)
{
    return ((obj1.real==obj2.real)&&(obj1.img==obj2.img));
}

bool operator !=(Complex const &obj1,Complex const &obj2)
{
    return ((obj1.real!=obj2.real)||(obj1.img!=obj2.img));
}

int main()
{
    int r,i;
    cout<<"Enter real part for 1st Complex number:";
    cin>>r;
    cout<<"Enter imaginary part for 1st Complex number:";
    cin>>i;
    Complex c1(r,i);
    cout<<"Enter real part for 2nd Complex number:";
    cin>>r;
    cout<<"Enter imaginary part for 2nd Complex number:";
    cin>>i;
    Complex c2(r,i);
    if(c1==c2)
    {
        cout<<"The Complex numbers are Equal!";
    }
    if(c1!=c2)
    {
        cout<<"The Complex numbers are not Equal!";
    }
}

