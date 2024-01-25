#include <iostream>

using namespace std;

int main(){
    int peso, excesso, multa;
    cout << "quantos kilos de peixe voce pescou: " << endl;
    cin >> peso;
    excesso = peso - 50;
    multa = 4 * excesso;
    cout << "quantidade de quilos alem do limite: "<< excesso << " kilos" << endl;
    cout << "valor da multa: "<< multa << " reais" ;
    return 0;
}