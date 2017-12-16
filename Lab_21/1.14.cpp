#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    f=sqrt(2*(b*b+c*c)-a*a)/2;
    g=sqrt(2*(a*a+c*c)-b*b)/2;
    h=sqrt(2*(b*b+a*a)-c*c)/2;
    cout<<f<<" "<<g<<" "<<h;
    
}