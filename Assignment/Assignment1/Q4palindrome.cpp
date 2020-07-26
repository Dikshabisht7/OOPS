#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char* str;
    int i, j;
    cout<<"Enter the String: ";
    cin>>str;
    j=0;
    i=strlen(str)-1;
    while(j<=i)
    {
        if(str[j]!=str[i])
        {
           cout << str << " is not a palindrome";
           return 0;
        }
        j++;
        i--;
    }
        cout << str << " is a palindrome";
}
