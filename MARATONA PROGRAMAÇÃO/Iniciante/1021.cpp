#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main(){
	double N;			
	int R; 					
	int n100, t100;
	int n50, t50;
	int n20, t20;
	int n10, t10;
	int n5, t5;
	int n2, t2;
	int m1, r1;
	int m05, r05;
	int m025, r025;
	int m01, r01;
	int m005, r005;
	int m001;
	
	cin >> N;
	
	R = N*100;
	
	n100 = R/10000;
	t100 = R%10000;
	
	n50 = t100/5000;
	t50 = t100%5000;
	
	n20 = t50/2000;
	t20 = t50%2000;
	
	n10 = t20/1000;
	t10 = t20%1000;
	
	n5 = t10/500;
	t5 = t10%500;
	
	n2 = t5/200;
	t2 = t5%200;	
	
	m1 = t2/100;
	r1 = t2%100;
	
	m05 = r1/50;
	r05 = r1%50;
	
	m025 = r05/25;
	r025 = r05%25;
	
	m01 = r025/10;
	r01 = r025%10;
	
	m005 = r01/5;
	r005 = r01%5;
	
	m001 = r005/1;
	
	

	cout << "NOTAS:" << endl;
	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << m1 << " moeda(s) de R$ 1.00" << endl;
	cout << m05 << " moeda(s) de R$ 0.50" << endl;
	cout << m025 << " moeda(s) de R$ 0.25" << endl;
	cout << m01 << " moeda(s) de R$ 0.10" << endl;
	cout << m005 << " moeda(s) de R$ 0.05" << endl;
	cout << m001 << " moeda(s) de R$ 0.01" << endl;
		
    return 0;
}
