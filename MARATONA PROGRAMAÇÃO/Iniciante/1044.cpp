#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
	int A, B;
	
	cin >> A >> B;
	
	if (A > B)
	{
		if (A%B == 0)
		{
			cout << "Sao Multiplos" << endl;
		}
		else
		{
			cout << "Nao sao Multiplos" << endl;	
		}
	}
	else
	{
		if (B%A == 0)
		{
			cout << "Sao Multiplos" << endl; 
		}
		else
		{
			cout << "Nao sao Multiplos" << endl;
		}
	}
		
	
	/* Se A for maior que B
	Dividir A por B e saber se o resto � igual a 0
	Se for igual a 0, A e B s�o multiplos.
	Se n�o for, Nao sao multiplos.
	
	Se B for maior que A 
	Dividir B por A e saber se o resto � igual a 0
	Se for igual a 0, B e A s�o multiplos.
	Se n�o for, Nao sao multiplos.
	*/
	
    return 0;
}
