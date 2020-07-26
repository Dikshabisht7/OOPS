#include <iostream>
using namespace std;
int main()
{
  int n,i,flag=0;
  cout << "Enter the Number: ";
  cin >> n;
  for(i=2;i<=n/2;i++)
  {
      if(n%i==0)
      {
          cout<<"Number is not Prime.";
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "Number is Prime.";
}
