#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, b[10000], c, d, e, f, g=0, h;
    double k, l, m, n, o, p;
    bool at= false;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>b[i];
     }
    cin>>c;
    d=abs(c-b[0]);
    for(int i=0; i<a; i++){
        if(d>=abs(c-b[i]))  {
            d=abs(c-b[i]);
            g=b[i];
        }
    }
    cout<<g;
}