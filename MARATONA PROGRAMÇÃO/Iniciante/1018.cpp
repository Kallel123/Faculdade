#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main(){
	int N, a, b, c, d, e, f, g, h, i, j, k, l, m;
	
	cin >> N;
	
	
	a = N/100;
	b = N%100;
	c = b/50;
	d = b%50;
	e = d/20;
	f = d%20;
	g = f/10;
	h = f%10;
	i = h/5;
	j = h%5;
	k = j/2;
	l = j%2;
	m = l/1;	
	
	cout << N << endl;
	cout << a << " nota(s) de R$ 100,00" << endl;
	cout << c << " nota(s) de R$ 50,00" << endl;
	cout << e << " nota(s) de R$ 20,00" << endl;
	cout << g << " nota(s) de R$ 10,00" << endl;
	cout << i << " nota(s) de R$ 5,00" << endl;
	cout << k << " nota(s) de R$ 2,00" << endl;
	cout << m << " nota(s) de R$ 1,00" << endl;
	
    return 0;
}
