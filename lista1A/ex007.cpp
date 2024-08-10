#include <iostream>
using namespace std;

int main() {
	float custo_carro, percent_distribuidor, impostos;
	
	int custo_fabrica;

	cin >> custo_fabrica;

	percent_distribuidor = (28.00 / 100.00) * 1 * custo_fabrica;
	impostos = (45.00 / 100.00) * 1 * custo_fabrica;

	custo_carro = custo_fabrica + percent_distribuidor + impostos;

	cout << custo_carro << endl;
}
