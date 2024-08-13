#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
		
	if (((n % 2 != 0) && (n < 0) && (n < -20)) || ((n % 2 != 1) && (n >= 0) && (n > 7))) {
		cout << "SIM\n";
	}
	else {
		cout << "NAO\n";
	}

	return 0;
}
