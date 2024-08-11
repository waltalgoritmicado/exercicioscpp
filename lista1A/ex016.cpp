#include <iostream>
using namespace std;

int main() {
    int n, n_oposto;

    cin >> n;
    if (n > -15 and n < 30) {
        if (n > 0) {
            n_oposto= -(n);
                cout << n_oposto << endl;
        }
        else {
            n_oposto= +(n);
            cout << n_oposto << endl;
        }
    } 
    else {
        cout << n << endl;
    }
}
