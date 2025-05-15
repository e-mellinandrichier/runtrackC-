#include <iostream>
using namespace std;

int main() {
    cout << "Ecrivez une note";
    int note;
    cin >> note;
    if (note >= 0 && note <= 10) {
        cout << "Non validé";
    } else if (note > 10 && note <= 20) {
        cout << "Validé";
    } else {
        cout << "Entrez une note entre 0 et 20";
    }
    return 0;
}