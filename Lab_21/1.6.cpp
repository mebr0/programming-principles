#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    e=(a+b+c)/2;
    f=sqrt(e*(e-a)*(e-b)*(e-c)); //Geron
    cout<<f;
}
