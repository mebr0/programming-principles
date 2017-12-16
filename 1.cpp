#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>
#include <stdlib.h> //atoi
#include <algorithm>
 
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int x[c], y[c];
    for(int i=0; i<c; ++i){
        cin>>x[i]>>y[i];
    }
    int z[a][b];
    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            z[i][j]=0;
        }
    }
    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            for(int k=0; k<c; ++k){
                if(x[k]==i+1 && y[k]==j+1){
                    z[i][j]=-11;
                }
            }
        }
    }
    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            if(z[i][j]<0){
                z[i+1][j]++;
                z[i+1][j-1]++;
                z[i][j-1]++;
                z[i-1][j-1]++;
                z[i-1][j]++;
                z[i-1][j+1]++;
                z[i][j+1]++;
                z[i+1][j+1]++;
            }
        }
    }
    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            if(z[i][j] >= 0) cout<<z[i][j]<<" ";
            else if(z[i][j] < 0) cout<<"* ";
        }
        cout<<endl;
    }
}