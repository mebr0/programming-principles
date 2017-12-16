#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, y, z, a, b, c;
    cin>>x>>y>>z;
    a=(1+y)*(x+y/(x*x+4))/(exp(-x-2)+1/(x*x+4));
    b=(1+cos(y-2))/(x*x*x*x/2+pow(sin(z), 2));
    cout<<a<<" "<<b;
    
}

