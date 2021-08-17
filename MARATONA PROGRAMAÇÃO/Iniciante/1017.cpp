#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	int h, v;
	double d;
	
	
	cin >> h >> v;

	d = v*h;
	d = d/12;
		
	cout << fixed << setprecision(3);	
	cout << d << endl; 
}
