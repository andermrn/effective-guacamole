#include <iostream>

using namespace std;

int main() {
    int n1, n2, soma, sub;
    cout << "INICIO\n";
    //Ler n1
    cout << "Digite um valor: ";
    cin >> n1;
    //ler n2
    cout << "Digite outro valor: ";
    cin >> n2;
    //somar
    soma = (n1 + n2);
    cout << "Soma: " << soma << endl;
    //subtrair
    sub = (n1 - n2);
    cout << "Subtracao: " << sub << endl;
    cout << "FIM.\n";

    return 0;
}