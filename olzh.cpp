#include <iostream>
#include <cmath>
#include <bitset>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int main()
{  
    int b, d=0, e=0, f=0, g=99999999, h; //97+26=123
    double l, m, n, o, p;
    bool at=1, ac=0;
    string x,y;
    getline(cin, x);
    
    stringstream a;
    a<<x;
    a>>y;
    a>>b;
    d=-b;    
    if(y=="South") cout<<0<<" "<<d<<endl;
    else if(y=="North") cout<<0<<" "<<b<<endl;
    else if(y=="West") cout<<d<<" "<<0<<endl;
    else if(y=="East") cout<<b<<" "<<0<<endl;
 
 
 
}