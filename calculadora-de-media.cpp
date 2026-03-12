#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, n4, m;
    cout << "INICIO\n\n";
    //Passo 01 coletar as notas
    cout << "Nota do primeiro Bimestre: ";
    cin >> n1;
    //Passo 02
    cout << "Nota do segundo Bimestre: ";
    cin >> n2;
    //Passo 03
    cout << "Nota do terceiro Bimestre: ";
    cin >> n3;
    //Passo 04
    cout << "Nota do quarto Bimestre: ";
    cin >> n4;
    m = (n1 + n2 + n3 + n4) / 4;
    //Passo 05 somar a média das notas
    cout << "Sua media e: " << m << endl << endl;
    cout << "FIM.";
    return 0;
}