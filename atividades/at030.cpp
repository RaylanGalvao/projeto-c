#include <iostream>

using namespace std;

int main(){
    float ganhop, horast, salariob;
    cout << "quanto voce ganha por hora trabalhada"<< endl;
    cin >> ganhop;
    cout << "quantas horas voce trabalha no mes"<< endl;
    cin >> horast;
    salariob = ganhop * horast;

    cout << "salario bruto: " << salariob << endl;

    return 0;
}