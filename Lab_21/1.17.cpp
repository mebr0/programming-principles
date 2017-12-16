#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
    double d, e;
    cin>>a>>b>>c;
    double f= abs(a-1);
    double g= abs(b);

    double d11= sqrt(f);
    double d12= pow(g, 1.0/3);
    double d1= d11- d12;
    double d2= 1 + (a*a/2) + (b*b/4);
    d= d1/d2;
    double e1=atan(c);
    double e2=exp(-a-3);
    e=(e1+e2)*a;
    cout<<d<<" "<<e;
}

