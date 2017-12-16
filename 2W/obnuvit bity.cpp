#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i;
    cin>>a>>i;
    b= 1<<i;
    c=a xor b;
    cout<<c;
}