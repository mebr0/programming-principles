#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
  string s,t="",w="";
  stringstream ss;
  int mx=-1,ww=0;
  getline(cin,s);
  ss<<s;
  while(ss>>t){
    if(t.size()>ww){
      ww=t.size();
      w=t;
    }
  }
  cout<<w;
/*  for(int i=0;i<w.size();i++)
    {
      if(w[i]-0>=48&&w[i]-0<=57)
      {
        ww++;
      }
    }
    cout*/
  return 0;
}