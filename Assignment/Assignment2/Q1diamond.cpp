#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(j=1;j<(i-1)*2;j++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            cout<<"\n";
        }
        else
        {
            cout<<"*\n";
        }
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(j=1;j<(i-1)*2;j++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            cout<<"\n";
        }
        else
            cout<<"*\n";
    }
}
