#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float n1, n2, n3, n4;
	double media;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	media = (n1*2+n2*3+n3*4+n4*1)/(10);
	
	cout << fixed << setprecision(1);
	cout << "Media: " << media << endl;
	
	if (media >= 7.0)
	{
		cout << "Aluno aprovado." << endl;
	}
	else
		if (media < 5.0)
		{
			cout << "Aluno reprovado." << endl;
		}
		else 
		{
			cout << "Aluno em exame." << endl;
			float nota_exame; 
			double media_exame;
			
			cin >> nota_exame;
			
			media_exame = (nota_exame+media)/(2);
			
			cout << "Nota do exame: " << nota_exame << endl;
			
			if (media_exame >= 5.0){
			
				cout << "Aluno aprovado." << endl;
			}
			else
			{
				cout << "Aluno reprovado." << endl;
			}
			cout << "Media final: " << media_exame << endl;
			
		}
	
	
	
	
	
}

