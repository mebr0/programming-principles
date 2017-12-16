#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b ,c, d, e, f, g, h;
    cin>>a;
    if(10<=a && a<=19) cout<<a<<" korov";
    else if(a%10==1) cout<<a<<" korova";
    else if(a%10==2 || a%10==3 || a%10==4) cout<<a<<" korovy";
    else cout<<a<<" korov";
}