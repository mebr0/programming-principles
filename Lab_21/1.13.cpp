#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    d=(a+b+c)/2;
    e=sqrt(d*(d-a)*(d-b)*(d-c)); //Geron
    f=2*e/a;
    g=2*e/b;
    h=2*e/c;
    cout<<f<<" "<<g<<" "<<h;
    
}