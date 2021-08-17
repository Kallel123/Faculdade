#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int p1, p2;
    int q1, q2;
    double v1, v2;
    double valor_a_pagar;
    cout << "Digite o numero de pecas: ";
    cin >> p1 >> q1 >> v1;
    cin >> p2 >> q2 >> v2;
    valor_a_pagar = q1*v1+q2*v2;

    cout << fixed << setprecision(2);
     
    cout << "VALOR A PAGAR: R$ " << valor_a_pagar << endl;
    
}
