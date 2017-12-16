#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, d, e;
    cin>>a>>b>>c;
    d=tan (c*M_PI/180.00)*(a-b)/2;
    e=(a+b)/2*d;
    cout<<e;

   
}
