#include <iostream>
using namespace std;

int main() {
	int n, cubo, quadrado;

	cin >> n;
	
	if (n >= 0){
		cubo = n * n * n;
		cout << cubo << endl;
	}
	else {
		quadrado = n * n;
		cout << quadrado << endl;
	}

}
