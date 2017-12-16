#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{  
    int  b, c=2000000, d=20000000, e=0, f=0, g, h;
    double k, l, m, n, o, p;
    bool at= false;
    for(int i=1; ;++i){
    	cin>>b;
    	if(b==0) {
    		cout<<f;
    	}
    	if(i%2==1){
    		if(c>d && c>b){
    			f++;
    		}
    		d=b;
    	}
    	if(i%2==0){
    		if(d>c && d>b){
    			f++;
    		}
    		c=b;
    	}

    }
 
}