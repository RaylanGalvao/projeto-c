#include <iostream>

using namespace std;

int main(){
    int dia;
    cout << "digite o dia da semana" << endl;
    cin >> dia;
    switch (dia){
        case 1:
        cout << "domingo" << endl;
        break;
        case 2:
        cout << "segunda" << endl;
        break;
        case 3:
        cout << "terca" << endl;
        break;
        case 4:
        cout << "quarta" << endl;
        break;
        case 5:
        cout << "quinta" << endl;
        break;
        case 6:
        cout << "sexta" << endl;
        break;
        case 7:
        cout << "sabado" << endl;
        break;
        default:
        cout << "valor invalido" << endl;
    }
    return 0;
}