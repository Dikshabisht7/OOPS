#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<n;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
}
