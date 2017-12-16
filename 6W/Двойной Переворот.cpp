#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, b[100000], c, d, e, f, g=0, h;
    double k, l, m, n, o, p;
    bool at= false;
    cin>>a>>c>>d>>e>>f;
    for(int i=0; i<a; i++){
        b[i]=i+1;
    }
 
    for(int i=c-1; i<(d+c)/2; i++){
        swap(b[c-1+g], b[d-1-g]);
        g++;
    }
    g=0;
    for (int i=e-1; i<(e+f)/2; i++){
        swap(b[e-1+g], b[f-1-g]);
        g++;
    }
    for(int i=0; i<a; i++){
        cout<<b[i]<<" ";
    }
}
