#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, b ,c, d, e, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>a>>b;
    for(int i=0; i<1000000; i++){
        if(a<2*b){
            a=a-1;
            cout<<"-1"<<endl;
        }
        if(a>=2*b && a%2==0) {
            a=a/2;
            cout<<":2"<<endl;
        }
        if(a>2*b && a%2==1) {
            a=a-1;
            cout<<"-1"<<endl;
        }
        if(a==b) break;
    }
}