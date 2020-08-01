#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"Enter number of rows:";
    cin>>n;
    cout<<"Enter number of columns:";
    cin>>m;
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==1||i==n)
            {
                if(j==1||j==2||j==(m-1)||j==m)
                {
                    cout<<" ";
                }
                else
                    cout<<"*";
            }
            else
                if(i==2||i==n-1)
            {
                if(j==2||j==m-1)
                {
                    cout<<"*";
                }
                else
                    cout<<" ";
            }
            else
            {
                if(j==1||j==m)
            {
                cout<<"*";
            }
            else
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
