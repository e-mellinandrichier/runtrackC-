#include <iostream>
using namespace std;

main() {
    int i, n, som;
    som = 0;
    for (i=0, i<4,i++) {
        cout << "donnez un entier";
        cin >> n;
        som += n;
    }
    cout << "Somme :" >> som;
}

i = 0
while (i<4) {
    cout << "donnez un entier";
    cin >> n;
    som += n;
    i +=1;
}

i = 0

do {cout << "donnez un entier";
    cin >> n;
    som += n;
    i +=1;} while {i <4}
