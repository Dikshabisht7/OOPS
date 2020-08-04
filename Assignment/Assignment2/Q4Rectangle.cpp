#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle()
    {
        length=1;
        width=1;
    }
    void setLength(float length)
    {
        if(length>0.0&&length<20.0)
        {
            this->length=length;
        }
        else
            cout<<"Invalid Input\n";
    }
    void setWidth(float width)
    {
        if(width>0.0&&width<20.0)
        {
            this->width=width;
        }
        else
            cout<<"Invalid Input\n";
    }
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }
    float getPerimeter()
    {
        return (2*(length+width));
    }
    float getArea()
    {
        return (length*width);
    }
};
int main()
{
    Rectangle r1;
    cout<<"Length for Rectangle1:"<<r1.getLength()<<endl;
    cout<<"Width for Rectangle1:"<<r1.getWidth()<<endl;
    cout<<"Area for Rectangle1:"<<r1.getArea()<<endl;
    cout<<"Perimeter for Rectangle1:"<<r1.getPerimeter()<<endl;
    Rectangle r2;
    int l,w;
    cout<<"Enter Length for Rectangle2:";
    cin>>l;
    r1.setLength(l);
    cout<<"Enter width for Rectangle2:";
    cin>>w;
    r1.setWidth(w);
    cout<<"Length for Rectangle2:"<<r1.getLength()<<endl;
    cout<<"Width for Rectangle2:"<<r1.getWidth()<<endl;
    cout<<"Area for Rectangle2:"<<r1.getArea()<<endl;
    cout<<"Perimeter for Rectangle2:"<<r1.getPerimeter()<<endl;
}
