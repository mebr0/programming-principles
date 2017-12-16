#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b ,c, d, e, f, g, h, i, j ,k, l, m;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(b==0 && c==0 ) {
        cout<<0;
    }
    else if(b==0 && c!=0 && -c/a>0) {
        e=sqrt(-c/a);
        cout<<e<<" "<<-e;
    }
    else if(b!=0 && c==0){
        f=-b/a;
        cout<<0<<" "<<f;
    }
    else if(d>0){
        g=(-b+sqrt(d))/(2*a);
        h=(-b-sqrt(d))/(2*a);
        cout<<g<<" "<<h;
    }
    else if(d==0){
         i=-b/(2*a);
         cout<<i;
    }
 
}