#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int a, b, c; 
	int x, y;
	
	cin >> a >> b >> c;
	
	x = (a+b+abs(a-b))/2;
	
	x = (x+c+abs(x-c))/2;

	cout << x << " eh o maior" << endl;
			
	
}
