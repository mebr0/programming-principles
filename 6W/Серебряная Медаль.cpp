#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int  b ,c, d, e=999999, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>b;
    int a[b];
   
    for(int i=0; i<b; ++i){
        cin>>a[i];
    }
    c=max(a[0], a[1]);
    d=min(a[0], a[1]);
    for(int i=2; i<b; ++i){
        if(a[i]>c) {
            d=c;
            c=a[i];
        }
        if(c>a[i] && a[i]>d) {
            d=a[i];
        }
 
    }
    cout<<d;
 
}