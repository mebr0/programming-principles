#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{  
    int  b, c=2000000, d=20000000, e=1, f=0, g=99999999, h;
    double k, l, m, n, o, p;
    bool at=0, ac=0;
    for(int i=1; ;++i){
    	cin>>b;
    	if(b==0) {
    		if(f<2){
                cout<<0;
                break;
            }
            else {
                cout<<g;
    		    break;
        }
    	}
    	if(i%2==1){
    		if(c>d && c>b){
    			f++;
    			at=1;
    			ac=1;
    		}
    		else ac=0;
    		d=b;
    	}
    	if(i%2==0){
    		if(d>c && d>b){
    			f++;
    			at=1;
    			ac=1;
    		}
    		else ac=0;
    		c=b;
    	}
    	if(at==1 && ac==0){
    		e++;
    	}
    	else{
            if(e>1 && e<g) g=e;
            e=1;

        }
    	

    }
 
}