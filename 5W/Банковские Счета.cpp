#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
  double x, p, y, a=0;
  cin>>x>>p>>y;
  while(x<y){
      x=x*(1+p/100);
      x=floor(100*x)/100;
      a++;
}
cout<<a;
}
