#include <iostream>

using namespace std;

int main () {
    //Declarando o tipo das variaveis
    int b, a, area;
    cout << "INICIO\n\n";
    //Lendo os valores 
    cout << "Digite a Base: ";
    cin >> b;
    cout << "Digite a ALtura: ";
    cin >> a;
    //calcular a Area
    area = (b * a);
    cout << "Area: " << area << endl << endl;
    cout << "FIM.";
    return 0;
}