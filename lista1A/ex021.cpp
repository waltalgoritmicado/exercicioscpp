#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	if (!(n % 5 == 0)) {
		cout << "NAO\n";
	}
	else {
		cout << "SIM\n";
	}

	return 0;
}
