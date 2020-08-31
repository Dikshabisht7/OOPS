#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[1000];
    for(i=2;i<1000;i++)
    {
        arr[i]=1;
    }
    for(i=2;i<1000;i++)
    {
        if(arr[i]==1)
        {
            for(j=2*i;j<1000;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    cout<<"All Prime Numbers between 2 and 1000 are:"<<endl;
    for(i=2;i<1000;i++)
    {
        if(arr[i])
        {
            cout<<i<<" ";
        }
    }
}
