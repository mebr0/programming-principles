#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, b ,c, d, e, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>d;
    a=0;
    b=1;
    if(d==1) {
        cout<<1;
        return 0;
    }
    for(int i=1; i<=d-1; i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
}
