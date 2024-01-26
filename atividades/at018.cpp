#include <iostream>

using namespace std;

int main(){
    float tm, vi, tmb, td;
    cout << "Digite o tamanho do arquivo em MB (Mega Bytes): "<< endl;
    cin >> tm;
    cout << "Digite a velocidade da internet em Mbps (Mega bits por segundo): " << endl;
    cin >> vi;
    tmb = tm +8;
    td = tmb / vi;
    cout << "o tempo aproximado para download e: "<< td << endl;

    return 0;
}