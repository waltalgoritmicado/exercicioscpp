#include <iostream>
using namespace std;

int main() {
	
	int n, mil, cen;
	cin >> n;

	mil= n % 1000;
	cen = mil / 100;

	cout << cen << endl;

	return 0;
}
