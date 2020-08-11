#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{
private:
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int x4,y4;
    char fillchar;
    char perichar;
public:
    Rectangle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
    {
        setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
    }
    void setCoordinates(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
    {
      if((x1>0&&x1<=20.0)&&(y1>0&&y1<=20.0)&&(x2>0&&x2<=20.0)&&(y2>0&&y2<=20.0)&&(x3>0&&x3<=20.0)&&(y3>0&&y3<=20.0)&&(x4>0&&x4<=20.0)&&(y4>0&&y4<=20.0))
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
    int Length()
    {
        int l1=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
        int l2=(sqrt(pow((x1-x3),2)+pow((y1-y3),2)));
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
        int w1=(sqrt(pow((x1-x3),2)+pow((y1-y3),2)));
        int w2=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
        if(w1<w2)
        {
            return w1;
        }
        else
        {
            return w2;
        }
    }
    int Area(int l,int w)
    {
        return (l*w);
    }
    int Perimeter(int l,int w)
    {
        return (2*(l+w));
    }
    void setFillCharacter(char fc)
    {
        fillchar=fc;
    }
    void setPerimeterCharacter(char pc)
    {
        perichar=pc;
    }
    void Draw()
    {

        int i,j;
        for(i=25;i>=y1+1;i--)
        {
            if(i==25)
            {
                for(j=0;j<=25;j++)
                {
                    cout<<".";
                }
                cout<<"\n";
            }

            else
            {
               cout<<".";
               for(j=1;j<=24;j++)
               {
                   cout<<" ";
               }
               cout<<".";
               cout<<"\n";
            }
        }
        for(i=y1;i>=y3;i--)
        {
            if(i==y1||i==y3)
            {
                cout<<".";
                for(j=1;j<=x3-1;j++)
                {
                    cout<<" ";
                }
                for(j=x3;j<=x2;j++)
                {
                    cout<<perichar;
                }
                for(j=x2+1;j<=24;j++)
                {
                    cout<<" ";
                }
                cout<<".\n";
            }
            else
            {
                cout<<".";
                for(j=1;j<=x3-1;j++)
                {
                    cout<<" ";
                }
                cout<<perichar;
                for(j=x3+1;j<=x4-1;j++)
                {
                    cout<<fillchar;
                }
                cout<<perichar;
                for(j=x4+1;j<=24;j++)
                {
                    cout<<" ";
                }
                cout<<".\n";
            }
        }
        for(i=y3-1;i>=0;i--)
        {
            if(i==0)
            {
                for(j=0;j<=25;j++)
                {
                    cout<<".";
                }
            }
            else
            {
                cout<<".";
                for(j=1;j<=24;j++)
                {
                    cout<<" ";
                }
                cout<<".\n";
            }
          }
    }
void Rotate()
{
        int i,j;
        {
            for(i=25;i>=x4+1;i--)
        {
            if(i==25)
            {
                for(j=0;j<=25;j++)
                {
                    cout<<".";
                }
                cout<<"\n";
            }

            else
            {
               cout<<".";
               for(j=1;j<=24;j++)
               {
                   cout<<" ";
               }
               cout<<".";
               cout<<"\n";
            }
        }
        for(i=x4;i>=x3;i--)
        {
            if(i==x4||i==x3)
            {
                cout<<".";
                for(j=1;j<=y3-1;j++)
                {
                    cout<<" ";
                }
                for(j=y3;j<=y1;j++)
                {
                    cout<<perichar;
                }
                for(j=y1+1;j<=24;j++)
                {
                    cout<<" ";
                }
                cout<<".\n";
            }
            else
            {
                cout<<".";
                for(j=1;j<=y3-1;j++)
                {
                    cout<<" ";
                }
                cout<<perichar;
                for(j=y3+1;j<=y1-1;j++)
                {
                    cout<<fillchar;
                }
                cout<<perichar;
                for(j=y1+1;j<=24;j++)
                {
                    cout<<" ";
                }
                cout<<".\n";
            }
        }
        for(i=x3-1;i>=0;i--)
        {
            if(i==0)
            {
                for(j=0;j<=25;j++)
                {
                    cout<<".";
                }
            }
            else
            {
                cout<<".";
                for(j=1;j<=24;j++)
                {
                    cout<<" ";
                }
                cout<<".\n";
            }

        }
    }
}
int CheckCoord(int x)
{
    if(x>=25)
    {
        cout<<"Limit Exceeded of Coordinates";
        exit(0);
    }
    else
    {
        return x;
    }
}
void Scaling(int l,int w,int s)
{
    if(((l+(2*s))<25) && ((w+(2*s))<25))
    {
        if(((x3-s)<=0) && ((y3-s)<=0))
        {
            x3=x3;
            y3=y3;
            y1=y1+2*s;
            CheckCoord(y1);
            x2=x2+2*s;
            CheckCoord(x2);
        }
        else
            if((x3-s)<=0)
        {
            x3=x3;
            y3=y3-s;
            y1=y1+s;
            x2=x2+2*s;
             CheckCoord(x2);
        }
        else
            if((y3-s)<=0)
        {
            y3=y3;
            x3=x3-s;
            y1=y1+2*s;
             CheckCoord(y1);
            x2=x2+s;
        }
        else
        {
            x3=x3-s;
            y3=y3-s;
            y1=y1+s;
            x2=x2+s;
        }
            int i,j;
            for(i=25;i>=y1+1;i--)
            {
                if(i==25)
                {
                    for(j=0;j<=25;j++)
                    {
                        cout<<".";
                    }
                    cout<<"\n";
                }

                else
                {
                   cout<<".";
                   for(j=1;j<=24;j++)
                   {
                       cout<<" ";
                   }
                   cout<<".";
                   cout<<"\n";
                }
            }
            for(i=y1;i>=y3;i--)
            {
                if(i==y1||i==y3)
                {
                    cout<<".";
                    for(j=1;j<=x3-1;j++)
                    {
                        cout<<" ";
                    }
                    for(j=x3;j<=x2;j++)
                    {
                        cout<<perichar;
                    }
                    for(j=x2+1;j<=24;j++)
                    {
                        cout<<" ";
                    }
                    cout<<".\n";
                }
                else
                {
                    cout<<".";
                    for(j=1;j<=x3-1;j++)
                    {
                        cout<<" ";
                    }
                    cout<<perichar;
                    for(j=x3+1;j<=x2-1;j++)
                    {
                        cout<<fillchar;
                    }
                    cout<<perichar;
                    for(j=x2+1;j<=24;j++)
                    {
                        cout<<" ";
                    }
                    cout<<".\n";
                }
            }
            for(i=y3-1;i>=0;i--)
            {
                if(i==0)
                {
                    for(j=0;j<=25;j++)
                    {
                        cout<<".";
                    }
                }
                else
                {
                    cout<<".";
                    for(j=1;j<=24;j++)
                    {
                        cout<<" ";
                    }
                    cout<<".\n";
                }
              }
    }
    else
    {
        cout<<"Limit Exceeded";
        exit(0);
    }
}
};
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,scale,ch;
    char fc,pc,choice;
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
    int length=r1.Length();
    cout<<"\nLength of Rectangle:"<<length;
    int width=r1.Width();
    cout<<"\nWidth of Rectangle:"<<width;
    cout<<"\nArea of Rectangle:"<<r1.Area(length,width);
    cout<<"\nPerimeter of Rectangle:"<<r1.Perimeter(length,width);
    cout<<"\nEnter Fill character:";
    cin>>fc;
    r1.setFillCharacter(fc);
    cout<<"Enter Perimeter character:";
    cin>>pc;
    r1.setPerimeterCharacter(pc);
    r1.Draw();
    do
    {
        cout<<"\nMenu \n1-Rotate \n2-Scaling \n3-Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:r1.setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
                   r1.Rotate();
            break;
            case 2:cout<<"\nEnter scale Factor:";
                   cin>>scale;
                   r1.setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
                   r1.Scaling(length,width,scale);
            break;
            case 3:exit(0);
            break;
            default: printf("Invalid Choice");
        }
        cout<<"\nDo you want to continue:Y or N->";
        cin>>choice;
    }while(choice=='Y' || choice=='y');
}
