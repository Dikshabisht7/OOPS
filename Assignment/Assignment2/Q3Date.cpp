#include<iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int d,int m,int y)
    {
        day=d;
        year=y;
        if(m>=1&&m<=12)
        {
            month=m;
        }
        else
        {
            month=1;
        }
    }
    void setMonth(int m)
    {
        if(m>=1&&m<=12)
            month=m;
        else
            month=1;
    }
    void setDay(int d)
    {
        day=d;
    }
    void setYear(int y)
    {
        year=y;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    int getYear()
    {
        return year;
    }
    void displayDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    int d,m,y;
    cout<<"Enter day:";
    cin>>d;
    cout<<"Enter month:";
    cin>>m;
    cout<<"Enter year:";
    cin>>y;
    Date date1(d,m,y);
    cout<<"Date is: ";
    date1.displayDate();
    date1.setMonth(8);
    date1.setDay(2);
    date1.setYear(2020);
    cout<<"Date is: ";
    date1.displayDate();
}
