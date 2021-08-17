#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int i, f;
    
    cin >> i >> f;
    
    if(i >= f){
	
         cout << "O JOGO DUROU " << (24 - i) + f << " HORA(S)" << endl;
     }
    else{
	
        cout << "O JOGO DUROU " << f - i << " HORA(S)" << endl;
    }
        
    return 0;
}
