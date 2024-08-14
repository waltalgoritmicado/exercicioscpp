#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if ((n % 7 != 0) && (n % 11 != 0)) {
        cout << "Nao eh multiplo nem de 7 nem de 11\n";
    } else {
        if ((n % 7 == 0) && (n % 11 == 0)) {
            cout << "Multiplo de 7 e de 11\n";
        } else if (n % 7 == 0) {
            cout << "Multiplo de 7\n";
        } else {
            cout << "Multiplo de 11\n";
        }
    }

    return 0;
}
