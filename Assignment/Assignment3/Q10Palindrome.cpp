#include <iostream>
#include<cstring>
using namespace std;
bool testPalindrome(string str,int first,int last)
{
	if (first>=last)
		return true;
	if (str[first]!=str[last])
		return false;
	return testPalindrome(str,first+1,last-1);
}

int main()
{
    string str;
    cout<<"Enter the String:";
    getline(cin,str);
    int n=str.length();
	if (testPalindrome(str,0,n-1))
		cout<<"\""<<str<<"\""<<" is a Palindrome!";
	else
		cout<<"\""<<str<<"\""<<" is not a Palindrome!";

	return 0;
}
