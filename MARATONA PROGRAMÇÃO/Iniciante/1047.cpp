#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int i, mi, f, mf;
    
    cin >> i >> mi >> f >> mf;
    
    if(i >= f && mi >= mf){
	
         cout << "O JOGO DUROU " << (24 - i) + f << " HORA(S) E " << (60-mi) + mf << " MINUTO(S)" << endl;
     }
    else{
	
        cout << "O JOGO DUROU " << f - i << " HORA(S) E " << (60-mi) + mf << " MINUTO(S)" << endl;
    }
        
    return 0;
}
