#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;
public:
    friend ostream & operator <<(ostream &,const Complex &);
    friend istream & operator >>(istream &,Complex &);
    Complex(int r = 0, int i =0)
    {
        real = r;
        imag = i;
    }
};

ostream & operator <<(ostream &output,const Complex &c)
{
    output<<c.real;
    output<<"+i"<<c.imag<<endl;
    return output;
}

istream & operator >>(istream &input, Complex &c)
{
    cout<<"Enter Real Part:";
    input>>c.real;
    cout<<"Enter Imaginary Part:";
    input>>c.imag;
    return input;
}

int main()
{
   Complex c1,c2;
   cin >> c1;
   cout << "The complex number c1 is:";
   cout << c1;
   cin >> c2;
   cout << "The complex number c2 is:";
   cout << c2;
   return 0;
}
