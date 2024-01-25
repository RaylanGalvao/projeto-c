#include <iostream>

using namespace std;

int main(){
    float gp, ht, sm;
    cout << "quanto voce ganha por hora trabalhada"<< endl;
    cin >> gp;
    cout << "quantas horas voce trabalha no mes"<< endl;
    cin >> ht;

    sm = gp * ht;
    cout << sm << endl;

    return 0;
}