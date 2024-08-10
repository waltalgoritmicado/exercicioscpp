#include <iostream>
using namespace std;

int main(){
    int n, hora, minuto, segundo;
    cin >> n;

    hora = n / 3600;
    
    minuto = (n % 3600) / 60;
    segundo = (n % 3600) % 60 ;
    
    cout << hora << ":" << minuto << ":" << segundo << endl;
}
