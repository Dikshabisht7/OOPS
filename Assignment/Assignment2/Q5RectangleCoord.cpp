#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{
private:
    float x1,y1;
    float x2,y2;
    float x3,y3;
    float x4,y4;
public:
    Rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
    {
        setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
    }
    void setCoordinates(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
    {
      if((x1>=0&&x1<=20.0)&&(y1>=0&&y1<=20.0)&&(x2>=0&&x2<=20.0)&&(y2>=0&&y2<=20.0)&&(x3>=0&&x3<=20.0)&&(y3>=0&&y3<=20.0)&&(x4>=0&&x4<=20.0)&&(y4>=0&&y4<=20.0))
        {
            this->x1=x1;
            this->y1=y1;
            this->x2=x2;
            this->y2=y2;
            this->x3=x3;
            this->y3=y3;
            this->x4=x4;
            this->y4=y4;
        }
        else
        {
            cout<<"Invalid Input!";
            exit(0);
        }
    }

    void Square()
    {
        if(((sqrt(pow((x2-x1),2)+pow((y2-y1),2)))==(sqrt(pow((x4-x3),2)+pow((y4-y3),2))))&&((sqrt(pow((x4-x3),2)+pow((y4-y3),2)))==(sqrt(pow((x1-x3),2)+pow((y1-y3),2))))&&((sqrt(pow((x1-x3),2)+pow((y1-y3),2)))==(sqrt(pow((x2-x4),2)+pow((y2-y4),2)))))
        {
            if(((sqrt(pow((x1-x4),2)+pow((y1-y4),2)))==(sqrt(pow((x2-x3),2)+pow((y2-y3),2)))))
            {
               cout<<"It is a square!";
               exit(0);
            }
            else
            {
                cout<<"It is a Rhombus!";
                exit(0);
            }
        }
        else
        {
            if(((sqrt(pow((x2-x1),2)+pow((y2-y1),2)))==(sqrt(pow((x4-x3),2)+pow((y4-y3),2))))&&((sqrt(pow((x1-x3),2)+pow((y1-y3),2)))==(sqrt(pow((x2-x4),2)+pow((y2-y4),2)))))
               {
                   if(((sqrt(pow((x1-x4),2)+pow((y1-y4),2)))==(sqrt(pow((x2-x3),2)+pow((y2-y3),2)))))
                   {
                        cout<<"It is a Rectangle!";
                   }
                   else
                   {
                       cout<<"It is a Parallelogram!";
                       exit(0);
                   }
               }
            else
                {
                    cout<<"It is neither rectangle nor square!";
                    exit(0);
                }
        }
    }
    float Length()
    {
        float l1=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
        float l2=(sqrt(pow((x1-x3),2)+pow((y1-y3),2)));
        if(l1>l2)
        {
            return l1;
        }
        else
        {
            return l2;
        }
    }
    float Width()
    {
        float w1=(sqrt(pow((x1-x3),2)+pow((y1-y3),2)));
        float w2=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
        if(w1<w2)
        {
            return w1;
        }
        else
        {
            return w2;
        }
    }
    float Area(float l,float w)
    {
        return (l*w);
    }
    float Perimeter(float l,float w)
    {
        return (2*(l+w));
    }
};
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    cout<<"Enter top left coordinate(x1,y1):";
    cin>>x1>>y1;
    cout<<"Enter top right coordinate(x2,y2):";
    cin>>x2>>y2;
    cout<<"Enter bottom left coordinate(x3,y3):";
    cin>>x3>>y3;
    cout<<"Enter bottom right coordinate(x4,y4):";
    cin>>x4>>y4;
    Rectangle r1(x1,y1,x2,y2,x3,y3,x4,y4);
    r1.Square();
    float length=r1.Length();
    cout<<"\nLength of Rectangle:"<<length;
    float width=r1.Width();
    cout<<"\nWidth of Rectangle:"<<width;
    cout<<"\nArea of Rectangle:"<<r1.Area(length,width);
    cout<<"\nPerimeter of Rectangle:"<<r1.Perimeter(length,width);
}
