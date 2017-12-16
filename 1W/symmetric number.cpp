#include<iostream>//симметричное число
#include<cmath>
using namespace std; //1234
int main (){
    int a,b,c,d,e;
    cin>>a;
    b=a/1000;
    e=a%10;
    d=(a%100-e)/10;
    c=(a-b*1000-d*10-e)/100;
   
    cout<<b*10+c-d-e*10+1;
   
   
}