#include<iostream>
using namespace std;
int main() {
 
int a, b, c, d; //1234
cin>>a>>b>>c>>d;
if(((a-b==c-d) ||(b+a==d+c)) ||((a==c)||(b==d)))cout<<"YES";
else cout<<"NO";
 
 
 
}