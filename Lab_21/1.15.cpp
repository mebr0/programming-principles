#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    f=sqrt(b*c*((b+c)*(b+c)-a*a))/(b+c);
    g=sqrt(a*c*((a+c)*(a+c)-b*b))/(a+c);
    h=sqrt(b*a*((b+a)*(b+a)-c*c))/(a+b);
    cout<<f<<" "<<g<<" "<<h;
    
}