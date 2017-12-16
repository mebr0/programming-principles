#include<iostream>
#include<cmath>
#include<bitset>
using namespace std; //1 7 9 0
int main()
{  
    int b, c=0, d=0, e, f, g, h=0, k=0; //b<c<d
    double l, m, n, o, p;
    bool at= false;
    while(1){
        cin>>b;
        if(b==0) break;
        if(b==c) {
            h++;
        }
        if(b!=c){
            h=0;
        }
        if(h>d) d=h;
        c=b;
 
}
 
    cout<<d+1;
}