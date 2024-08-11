#include <iostream>
using namespace std;

int main(){
	int n, resto;

	cin >> n;
	resto = n % 3;

	if (resto == 0){
		cout << "SIM" << endl;
	}
	else {
		cout << "NAO" << endl;
	}
}
