#include <iostream>
using namespace std;

int main(){

	int n;
	
	cin >> n;

	if (!((n % 2) == 0)) {
		cout << "IMPAR\n";
	}
	else {
		cout << "PAR\n";
	}

	return 0;
}
