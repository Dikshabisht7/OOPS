#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Pythagorean Triples are:"<<endl;
	for(int side1=1;side1<=500;side1++)
	{
		for(int side2=side1+1;side2<=500;side2++)
		{
			for(int hypo=side2+1;hypo<=500;hypo++)
			{
				if(pow(side1,2)+pow(side2,2)==pow(hypo,2))
                {
                    cout<<side1<<"\t"<<side2<<"\t"<<hypo<<endl;
                }
			}
		}
	}
	return 0;
}
