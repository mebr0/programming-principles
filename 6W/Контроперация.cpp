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
    for(int i=0; i<b; ++i){
        if(a[i]>c) c=a[i];
        if(a[i]<d) d=a[i];
}
for(int i=0; i<b; ++i){
    if(a[i]==c) a[i]=d;
    cout<<a[i]<<" ";
}
 
}