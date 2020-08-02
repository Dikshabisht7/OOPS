#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"Enter number of rows:";
    cin>>n;
    cout<<"\n";
    if(n<3)
    {
        cout<<"Invalid number";
    }
    else
        if(n==3)
    {
        for(i=1;i<=5;i++)
        {
            if(i==1||i==5)
            {
                cout<<" *\n";
            }
            else
            {
            cout<<"* ";
            cout<<"*\n";
            }
        }
    }
    else
    {
        for(i=1;i<=n+2;i++)
        {
            if(i==1||i==n+2)
            {
                for(j=1;j<=2;j++)
                {
                    cout<<" ";
                }
                for(k=j;k<=n-2;k++)
                {
                    cout<<"*";
                }
                cout<<"\n";
            }
            else
                if(i==2||i==n+1)
            {
                cout<<" ";
                cout<<"*";
                for(j=1;j<=n-4;j++)
                {
                    cout<<" ";
                }
                cout<<"*";
                cout<<"\n";
            }
            else
            {
                cout<<"*";
                for(j=2;j<n;j++)
                {
                    cout<<" ";
                }
                cout<<"*";
                cout<<"\n";
            }
        }
    }
}
