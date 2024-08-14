#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, media_aritmetica;
    int quantidade_faltas;
    cin >> n1 >> n2 >> n3 >> quantidade_faltas;
    
    media_aritmetica = (n1 + n2 + n3) / 3;

    if (quantidade_faltas >= 10) {
        cout << "NAO\n";
    } else {
        if (media_aritmetica < 4.0) {
            cout << "NAO\n";
        } else if ((media_aritmetica >= 4.0) && (media_aritmetica < 7.0)) {
            cout << "TALVEZ\n";
        } else {
            cout << "SIM\n";
        }
    }

    return 0;
}
