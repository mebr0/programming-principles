
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d;
    if(((abs(a-c)==1) || (abs(a-c)==0)) && ((abs(b-d)==1) || (abs(b-d)==0))) cout<<"YES";
    else cout<<"NO";
   
}