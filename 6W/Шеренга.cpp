#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, b[10000], c, d, e, f=0, g, h;
    double k, l, m, n, o, p;
    bool at= false;
    cin>>a;
    for(int i=0; i<a; i++) {
        cin>>b[i];
    }
    cin>>c;
    for(int i=0; i<a; i++){
        if(c>b[i]) {
            cout<<i+1;
            return 0;
        }
    }
    cout<<a+1;
}
