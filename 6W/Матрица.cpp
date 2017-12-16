#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
    int  b ,c, d=0, e=999999, f=0, g, h;
    double k, l, m, n, o, p;
    cin>>b>>c;
    int a[b][c];
    int y[b], z[c];
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            cin>>a[i][j];
            y[i]=999999999;
            z[j]=-9999999999;
        }
    }
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            if(y[i]>a[i][j]) y[i]=a[i][j];
        }
    }
    for(int j=0; j<c; ++j){
        for(int i=0; i<b; ++i){
            if(a[i][j]>z[j]) z[j]=a[i][j];
        }
    }
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            if(a[i][j]==y[i] && a[i][j]==z[j]) f++;
        }
    }
    cout<<f;
}
//Задана матрица K, содержащая n строк и m столбцов. Седловой точкой этой матрицы назовем элемент, который одновременно является минимумом в своей строке и максимумом в своем столбце.

//Найдите количество седловых точек заданной матрицы.