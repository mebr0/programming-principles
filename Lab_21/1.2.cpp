#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c;
    double d, e, f;
    cin>>a>>b>>c;
    d=3.14*c*(a*a+b*b+a*b)/3;
    f=sqrt(c*c+(a-b)^2);
    e=3.14*f*(a+b)+3.14*(a*a+b*b);
    cout<<d<<" "<<e<<" "<<f;
}
