#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int  b ,c=0, d=9, e=999999, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>b;
    int a[b];
    for(int i=0; i<b; ++i){
        cin>>a[i];
    }
    for(int i=b-1; i>0; --i){
        swap(a[i],a[i-1]);
    }
    for(int i=0; i<b; ++i){
        cout<<a[i]<<" ";
    }
}
