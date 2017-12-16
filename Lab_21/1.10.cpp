#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, d, e;
    cin>>a>>c;
    b=sqrt(c*c-a*a);
    d=(a+b+c)/2;
    e=sqrt((d-a)*(d-b)*(d-c)/d);
    cout<<b<<" "<<e;    
   
}
