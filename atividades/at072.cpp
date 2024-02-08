#include <iostream>

using namespace std;

int main(){

    float cds, valor, total;
    cout << "quantos CDs voce tem?"<< endl;
    cin >> cds;
    for (int i=1; i<=cds; i++){
        cout << "qual o preco do " << i << " CD" << endl;
        cin >> valor;
        total=total+valor;
    }
    cout << "o valor total investido foi: " << total << endl; 
    cout << "A media gasta por CDs e: " << total/cds << endl; 

    return 0;
}