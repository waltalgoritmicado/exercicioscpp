#include <iostream>
using namespace std;

const int ano_atual = 2020;

int main() {
	int ano_nascimento, idade;
	cin >> ano_nascimento;

	idade = ano_atual - ano_nascimento;
	

	cout << idade << endl;
	if (idade >= 16) {
		cout << "SIM\n";
	} else {
		cout << "NAO\n";
	}

	if (idade >= 18) {
		cout << "SIM\n";
	} else {
		cout << "NAO\n";
	}
	return 0;
}
