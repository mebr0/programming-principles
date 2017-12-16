#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <map>
#include <stdlib.h>
#include <sstream>

using namespace std;

string f(string a){
	for(int i=0; i<a.size(); ++i){
		if(a[i]>='A' && a[i]<='Z') a[i]+=32;
	}
	return a;
}
string g(string a){
	for(int i=0; i<a.size(); ++i){
		if(a[i]>='a' && a[i]<='z') a[i]-=32;
	}
	return a;
}
int main(){
	string s, x;
	int a=0;
	map<string, int> m;
	map<string, int>::iterator it;
	while(cin>>s){
		s = f(s);
		m[s]++;
	}
	for(it = m.begin(); it != m.end(); ++it){
		if((*it).second > a){
			a = (*it).second;
			x = (*it).first;
		}
	}
	x = g(x);
	cout<<x;
}