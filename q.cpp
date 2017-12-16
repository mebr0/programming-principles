#include <iostream>
#include <cmath>

using namespace std;

double Len(double x1, double y1, double x2, double y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main(){
	double m, n ,k;
	double Ax, Ay, Bx, By, Fx, Fy, Ex, Ey;

	cout << "Ax=";
	cin >> Ax;
	cout << "Ay=";
	cin >> Ay;
	cout << "Bx=";
	cin >> Bx;
	cout << "By=";
	cin >> By;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	cout << "k=";
	cin >> k;

	double len = Len(Ax, Ay, Bx, By);
	double lenx = Bx - Ax;
	double leny = By - Ay;

	Fx = m*lenx/(m+n+k) + Ax;
	Fy = m*leny/(m+n+k) + Ay;
	Ex = Bx - k*lenx/(m+n+k);
	Ey = By - k*leny/(m+n+k);

    /*Расстояние от Fx до Аx эквивалентно m,
    в то же время как расстояние от Bx до Ах -
    m+n+k
    Расстояние от Bx до Ex эквивалентно k,
    в то же время как расстояние от Bx до Ах -
    m+n+k*/

	cout << "Fx=" << Fx << endl;
	cout << "Fy=" << Fy << endl;
	cout << "Ex=" << Ex << endl;
	cout << "Ey=" << Ey << endl;

	m = Len(Ax, Ay, Fx, Fy) * (m+n+k) / len;
	n = Len(Fx, Fy, Ex, Ey) * (m+n+k) / len;
	k = Len(Bx, By, Ex, Ey) * (m+n+k) / len;

   	/*Расстояние от F до А как m, а от B до А как m+n+k
   	Расстояние от E до F как n, а от B до А как m+n+k
   	Расстояние от B до E как k, а от B до А как m+n+k*/

   	cout << "m=" << m << endl;
	cout << "n=" << n << endl;
	cout << "k=" << k << endl;

}