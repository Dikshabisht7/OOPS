#include<iostream>
using namespace std;
int main()
{
    int i,j,n,key,arr[50];
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        key=arr[i];
        for(j=i-1;(j>=0)&&(arr[j]>key);j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    cout<<"Sorted Array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

