#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, y, z, a, b, c;
	cin>>x>>y>>z;
    a=2*cos(x-M_PI/6)/(0.5+sin(y)*sin(y));
    b=1+(z*z)/(3+z*z/5);
    cout<<a<<" "<<b;
}

