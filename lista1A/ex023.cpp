#include <iostream>
using namespace std;

int main() {
	int r, k, ak, n, an;

	cin >> k >> ak >> r >> n;

	an = ak + ((n-k) * r);

	cout << an;

	return 0;
}
