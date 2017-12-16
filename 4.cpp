#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <vector>
#include <map>
#include <stdlib.h>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	int a, c, d=0, e;
	cin>>a;
	int b[a];
	d=1000000;
	for(int i=0; i<a; ++i){
		cin>>b[i];
	}
	cin>>c;
	for(int i=0; i<a; ++i){
		if(abs(b[i]-c) < d){
			d = abs(b[i]-c);
			e = b[i];
		}
	}
	cout<<e;
}