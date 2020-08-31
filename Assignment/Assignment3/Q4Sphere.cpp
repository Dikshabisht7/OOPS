#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
inline float sphereVolume(float radius)
{
    return ((4.0/3.0)*3.14159*pow(radius,3));
}
int main()
{
    float radius;
    cout<<"Enter the radius of the Sphere:";
    cin>>radius;
    cout<<"The Volume of the Sphere is:"<<fixed<<setprecision(2)<<sphereVolume(radius);
    return 0;
}
