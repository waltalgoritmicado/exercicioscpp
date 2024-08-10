#include <iostream>
using namespace std;

#define PI 3.14

int main() {
    float n, raio, V;
    cin >> n;
	

    // o raio de uma esfera é metade de seu diametro
    raio = n / 2.0;

    V = ((4 * PI) / 3) * (raio * raio * raio);
    
    cout << V << endl;
}

