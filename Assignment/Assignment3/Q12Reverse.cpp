#include<iostream>
#include<cstring>
using namespace std;
void stringReverse(string str,int first)
{
    int n=str.length();
    static int c=n-1;
    if(first==n)
    {
        return;
    }
    cout<<str[c--];
    stringReverse(str,first+1);
}
int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    cout<<"The Reverse String is: ";
    stringReverse(str,0);
}
