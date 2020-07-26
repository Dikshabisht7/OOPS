#include<iostream>
using namespace std;
int main()
{
      int n,i,j,k,t,num[50];
      cout<<"Enter number of elements: ";
      cin>>n;
      cout<<"Enter elements: ";
      for(i=0;i<n;i++)
      {
           cin>>num[i];
      }
       for (i = 0; i < n; i++)
      {
        for (j = i+1; j < n;j++ )
        {
            if (num[i] == num[j])
            {
                for(k=j;k<n-1;k++)
                {
                    num[k]=num[k+1];
                }
                --n;
            }
        }
      }
      for(i=0;i<n-1;i++)
      {
           for(j=i+1;j<n;j++)
               {
                  if(num[i]>num[j])
                    {
                       t=num[i];
                       num[i]=num[j];
                       num[j]=t;
                     }
                }
       }
       cout<<"Second maximum number: "<<num[n-2]<<endl;
       cout<<"Second minimum number: "<<num[1]<<endl;
}

