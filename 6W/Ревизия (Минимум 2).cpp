#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int  b ,c, d, e, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>b;
    int a[b];
    for(int i=0; i<b; ++i){
        cin>>a[i];
    }
    c=a[0];
    for(int i=1; i<b; ++i){
        if(a[i]<c) {
            c=a[i];
        }
    }
    for(int i=0; i<b; ++i){
        if(c<a[i] && a[i]<d) {
            d=a[i];
        }
    }
    cout<<c<<" "<<d;
}