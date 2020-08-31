#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    friend Complex operator *(Complex const &,Complex const &);
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};

Complex operator *(Complex const &obj1,Complex const &obj2)
{
    Complex result;
    result.real=((obj1.real*obj2.real)-(obj1.img*obj2.img));
    result.img=((obj1.real*obj2.img)+(obj2.real*obj1.img));
    return result;
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
    Complex c3=c1*c2;
    cout<<"\n\nThe final Complex Number after multiply:";
    c3.print();
}
