#include <iostream>

using namespace std;

int main()
{
	int n,nota,suma=0;
	cout << "LEER N NOTAS" << endl;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cout<<"Ingrese la nota "<<i<<": ";
		cin>>nota;
		suma = suma + nota;
		
	}
	cout<<"La suma de notas es "<<suma<<endl;
	cout<<"El promedio es : "<<suma/n;
	return 0;
}
