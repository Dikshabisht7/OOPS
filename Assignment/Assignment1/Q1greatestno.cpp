#include<iostream>
using namespace std;
int main()
{
     float n1,n2,n3;
     cout<<"Enter three numbers: ";
     cin>>n1>>n2>>n3;
     if(n1>=n2 && n1>=n3)
     {
         cout<<"Greatest Number: "<<n1;
     }

     else

     if(n2>=n1 && n2>=n3)
     {
         cout<<"Greatest Number: "<<n2;
     }

     else

     if(n3>=n1 && n3>=n2)
     {
         cout<<"Greatest Number: "<<n3;
     }
}

