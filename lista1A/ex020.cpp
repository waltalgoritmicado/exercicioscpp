#include <iostream>
using namespace std;

int main() {

	double valor_maximo, salario_bruto, valor_prestacao;

	cin >> salario_bruto >> valor_prestacao;
	
	valor_maximo = (30.00 / 100.00) * salario_bruto;

	if (valor_prestacao > valor_maximo) {
		cout << "NAO\n";
	}
	else {
		cout << "SIM\n";
	}

	return 0;
}
