#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, r;
    cout << "INICIO\n\n";
    //passo 01
    cout << "Digite o primeiro valor: ";
    cin >> n1;
    //passo 02
    cout << "Digite o segundo valor: ";
    cin >> n2;
    //passo 03
    cout << "Digite o terceiro valor: ";
    cin >> n3;
    //passo 04
    r = (n1 + n2 + n3);
    cout << "O resultado e: " << r;
    cout << "\n\n";
    cout << "FIM";

    return 0;
}