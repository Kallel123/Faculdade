#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
	double A, B, C;
	
	cin >> A >> B >> C;	
	
	if (A >= B+C){
		cout << "NAO FORMA TRIANGULO" << endl; 
	}
	else
		if (pow(A,2) == pow(B,2)+pow(C,2)){
			cout << "TRIANGULO RETANGULO" << endl;
			if (A == C)
				{
					cout << "TRIANGULO ISOSCELES" << endl;
				}
		}
		else
			if (pow(A,2) > pow(B,2)+pow(C,2)){
				cout << "TRIANGULO OBTUSANGULO" << endl;
				if (A == C)
					{
						cout << "TRIANGULO ISOSCELES" << endl;
					}
			}
			else
				if (pow(A,2) < pow(B,2)+pow(C,2)){
					cout << "TRIANGULO ACUTANGULO" << endl;
					if (A == C)
					{
						cout << "TRIANGULO ISOSCELES" << endl;
					}
				}
				else
					if (A == B == C){
						cout << "TRIANGULO EQUILATERO" << endl;
					}
	
	/* 
	Ler 3 valores de ponto flutuante (A, B e C) 
	Ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
	Determine o tipo de tri�ngulo que estes tr�s lados formam, com base nos casos
	Escreva a mensagem adequada para cada caso
	
	ENTRADA:
	A entrada contem 3 valores de ponto flutuante de dupla precisao
	A (0 < A) B (0 < B) e C (0 < C).
	
	SA�DA:
	Imprima todas as classifica��es do tri�ngulo especificado na entrada.
	
	Se A for maior ou igual a B + C. Imprima NAO FORMA TRIANGULO
	Se A� for igual a B�+C�. Imprima TRIANGULO RETANGULO
	Se A� for maior que B�+C�. Imprima TRIANGULO OBTUSANGULO
	Se A� for menor que B�+C�. Imprima TRIANGULO ACUTANGULO
	Se A for igual a B e igual a C. Imprima TRIANGULO EQUILATERO
	Se apenas 2 lados forem iguais. Imprima TRIANGULO ISOSCELES
	*/ 

}
