#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
	int codigo, quantidade;
	double cachorro_quente, x_salada, x_bacon, torrada_simples, refrigerante;
	
	cin >> codigo >> quantidade;
		
	x_salada = quantidade*4.50;
	x_bacon = quantidade*5.00;	
	torrada_simples = quantidade*2.00;
	refrigerante = quantidade*1.50;
	cachorro_quente = quantidade*4.00;
	
	if (codigo == 1)
	{
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << cachorro_quente << endl;
	}
	else 
		if (codigo == 2)
		{
			cout << fixed << setprecision(2);
			cout << "Total: R$ " << x_salada << endl;
		}
		else
			if (codigo == 3)
			{
				cout << fixed << setprecision(2);
				cout << "Total: R$ " << x_bacon << endl;
			}
			else
				if (codigo == 4)
				{
					cout << fixed << setprecision(2);
					cout << "Total: R$ " << torrada_simples << endl;
				}
				else 
					if (codigo == 5)
					{
						cout << fixed << setprecision(2);
						cout << "Total: R$ " << refrigerante << endl;
					}
 
 
    return 0;
}
