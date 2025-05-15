#include <iostream>
using namespace std;

void addition(int n1, int n2)
{
    int res = n1+n2;
    cout << res << endl;
}

void soustraction(int n1, int n2)
{
    int res = n1-n2;
    cout << res << endl;
}
void multiplication(int n1, int n2)
{
    int res = n1*n2;
    cout << res << endl;
}

void division(int n1, int n2)
{
    int res = n1/n2;
    cout << res << endl;
}
int main()
{
    cout << "Entrez votre premier chiffre";
    int n1;
    cin >> n1;
    cout << "Entrez votre opérateur";
    char op;
    cin >> op;
    cout << "Entrez votre deuxième chiffre";
    int n2;
    cin >> n2;

    switch (op) {
        case '+' :
            addition(n1, n2);
            break;
        case '-' :
            soustraction(n1, n2);
            break;
        case '*' : 
            multiplication(n1, n2);
            break;
        case '/' : 
            division(n1, n2);
            break;
        default : 
            cout << "Non valide";
    }
    
    return 0;
}