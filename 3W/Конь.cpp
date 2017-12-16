#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d;
    if(((abs(c-a)==1) && (abs(d-b)==2)) ||((abs(c-a)==2) && (abs(d-b)==1)))cout<<"YES";
 
    else cout<<"NO";
   
}