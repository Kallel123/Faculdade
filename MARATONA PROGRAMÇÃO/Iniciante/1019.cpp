#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int N, h, m, r;
	
	cin >> N;
	
	h = N/3600;
	r = N%3600;
	m = r/60;
	N = N%60;
	
	cout << h << ":" << m << ":" << N << endl;	
	
}
