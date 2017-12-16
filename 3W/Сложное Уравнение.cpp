#include<iostream>//(ax+b)/(cx+d)=0
#include<cmath>
using namespace std;
int main()
{
    int a, b, d, c, h, e, f;
    cin>>a>>b>>c>>d;
    if((a==c && b==d) || (a==0 && b!=0)) cout<<"NO";
    else if(a==0 && b==0) cout<<"INF";
    else if(-b%a==0){
        if(c*(-b)/a+d!=0) cout<<-b/a;
        else cout<<"NO";
    }
    else cout<<"NO";
    }