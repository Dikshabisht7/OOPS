#include<iostream>
using namespace std;
void printArray(int arr[],int first,int last)
{
    if(first==last)
    {
        return;
    }
    cout<<arr[first]<<" ";
    printArray(arr,first+1,last);
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe elements of array are:";
    printArray(arr,0,n);
}

