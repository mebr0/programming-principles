#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, c=0, d, e, f, g=0, h;
    double k, l, m, n, o, p;
    bool at= false;
    cin>>a;
    int b[a][a];
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(i+j<a-1) cout<<0<<" ";
            else if(i+j==a-1) cout<<1<<" ";
            else if(i+j>a-1) cout<<2<<" ";
        }
        cout<<endl;
    }
}