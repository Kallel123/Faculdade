#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
	float A, B, C; 
	double perimetro, area;
	
	cin >> A >> B >> C;
	
	perimetro = A+B+C;
	area = (A+B)*C/2;
	
	if (!(B+C > A && A+B > C && A+C > B))
	{
		cout << fixed << setprecision(1);
		cout << "Area = " << area  << endl;	
	}
	else
	{
		cout << fixed << setprecision(1);
		cout << "Perimetro = " << perimetro << endl;	
	}
		
    return 0;
}
