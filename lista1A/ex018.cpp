#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    
    // and (&&) 

    if (( (n % 3) == 0) and ((n % 7) == 0)) {
        cout << "SIM\n";
    }
    else {
        cout << "NAO\n";
    }

    return 0;
}
