#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double a, b, c;
	double delta, r1, r2, f1, f2;
	
	cin >> a >> b >> c;
	
	delta = pow(b,2)-4*a*c;
	
	r1 = -b+sqrt(delta);
	r2 = -b-sqrt(delta);
	f1 = r1/(2*a);
	f2 = r2/(2*a);
	
	if (a == 0 || delta < 0)
	{
		cout << "Impossivel calcular" << endl;
	}
	else
		if (f1 && f2)
		{
			cout << fixed << setprecision(5);
			cout << "R1 = " << f1 << endl;
			cout << "R2 = " << f2 << endl;
		}	
	
}
