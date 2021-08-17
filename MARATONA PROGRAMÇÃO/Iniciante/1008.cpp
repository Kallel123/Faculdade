#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int f, h;
	double v;
	cin >> f >> h >> v;
	v = h*v; 
	
	
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << f << endl;
	cout << "SALARY = U$ " << v << endl;
	
}
