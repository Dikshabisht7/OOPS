#include<iostream>
using namespace std;
int recursiveMinimum(int arr[],int first,int last)
{
    static int min=arr[first];
    if(min>=arr[first])
    {
        min=arr[first];
    }
    if(first==last)
    {
        return min;
    }
    recursiveMinimum(arr,first+1,last);
    return min;
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
    int min=recursiveMinimum(arr,0,n-1);
    cout<<"The smallest element of the array is: "<<min;
    return 0;
}
