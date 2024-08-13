#include <iostream>
using namespace std;

int main() {
	int n, mil, cen, dez, uni;
	cin >> n;

	mil= n % 1000;
	cen= mil % 100;
	dez=  cen % 10;
	uni= dez;

	cout << uni << endl;

	return 0;
}
