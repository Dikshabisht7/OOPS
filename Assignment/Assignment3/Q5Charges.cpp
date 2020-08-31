#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float calculateCharges( float hours )
{
    float h = round(hours);
    float charge = 2.0;
    if(hours>0)
    {
        if(hours<=3 )
            return charge;
        else
            if(hours<=24)
            {
                while(h>3)
                {
                    charge+=.5;
                    h--;
                    if(charge>=10)
                        charge=10;
                }
                return charge;
            }
    }
    else
        return 0;
   return 0;
}

int main()
{
    int i;
    float one=0;
    float two=0;
    float three=0;
    float hours;
    for(i= 1;i<= 3;i++ )
    {
        cout<<"Enter customer "<<i<<" parking hours: ";
        cin>>hours;
        if(hours<0)
        {
            cout<<"Invalid Input!"<<endl;
            continue;
        }
        if(i==1 )
            one = hours;
        else
            if(i==2 )
            two = hours;
        else
            three = hours;
    }
    cout<<"\n\nCAR\t\tHours\t\tCharge"<<endl;
    cout<<"1\t\t"<<fixed<<setprecision(1)<<one<<"\t\t"<<fixed<<setprecision(2)<<calculateCharges(one)<<endl;
    cout<<"2\t\t"<<fixed<<setprecision(1)<<two<<"\t\t"<<fixed<<setprecision(2)<<calculateCharges(two)<<endl;
    cout<<"3\t\t"<<fixed<<setprecision(1)<<three<<"\t\t"<<fixed<<setprecision(2)<<calculateCharges(three)<<endl;
    cout<<"TOTAL\t\t"<<fixed<<setprecision(1)<<one+two+three<<"\t\t"<<fixed<<setprecision(2)<<calculateCharges(one)+calculateCharges(two)+calculateCharges(three);
}

