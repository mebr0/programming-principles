#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int a, b ,c, d, e, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=0; j<=i-1; j++){
            f++;
            if(f>a) break;
            cout<<i<<" ";
        }
    }
}