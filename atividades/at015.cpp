#include <iostream>

using namespace std;

int main(){
    float gp, ht, sm, ir, in, si, sl;
    cout << "quanto voce ganha por hora trabalhada"<< endl;
    cin >> gp;
    cout << "quantas horas voce trabalha no mes"<< endl;
    cin >> ht;
    sm = gp * ht;
    ir = sm * (11.0 / 100);
    in = sm * (8.0/100);
    si = sm * (5.0/100);
    sl = sm - ir - in - si;
    cout << "+Salario Bruto : " << sm << "R$" << endl;
    cout << "IR (11%) : " << ir << "R$" << endl;
    cout << "INSS (8%) : " << in << "R$" << endl;
    cout << "Sindicato (5%) : " << si << "R$" << endl;
    cout << "Salario Liquido : " << sl << "R$" << endl;
    

    return 0;
}