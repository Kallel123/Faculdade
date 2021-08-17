#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main(){
	int i, a, m, d, r;
	
	cin >> i;
	
	a = i/365;
	r = i%365;
	m = r/30;
	d = r%30;
	
	
	cout << a << " ano(s)" << endl;
	cout << m << " mes(es)" << endl;
	cout << d << " dia(s)" << endl;
		
}
