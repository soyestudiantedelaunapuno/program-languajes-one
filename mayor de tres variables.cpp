#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	cout << "Ingrese el valor de a"<<endl;
	cin >> a;
	cout << "Ingrese el valor de b"<<endl;
	cin >> b;
	cout << "Ingrese el valor de c"<<endl;
	cin >> c;
	
	if (a > b) {
		if (a > c) {
			cout << "El numero mayor es a = " << a << endl;
		} else {
			cout << "El numero mayor es b = " << b << endl;
		}
	}
	else {
		if (b > c) {
			cout << "El numero gmayor es c = " << c << endl;
		}
	}
	return 0;
}
