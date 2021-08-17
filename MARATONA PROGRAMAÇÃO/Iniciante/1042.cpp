#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if (a < b && b < c)
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}	
		else
			if (a < c && c < b)
			{
				cout << a << endl;
				cout << c << endl;
				cout << b << endl;
			}
			else
				if (b < a && a < c)
				{
					cout << b << endl;
					cout << a << endl;
					cout << c << endl;
				}
				else
					if (b < c && c < a)
					{
						cout << b << endl;
						cout << c << endl;
						cout << a << endl;
					}
					else
						if (c < a && a < b)
						{
							cout << c << endl;
							cout << a << endl;
							cout << b << endl;
						}
						else
							if (c < b && b < a)
						{
							cout << c << endl;
							cout << b << endl;
							cout << a << endl;
						}

	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
    return 0;
}
