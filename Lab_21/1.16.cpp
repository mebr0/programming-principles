#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.2f\n",e );
}