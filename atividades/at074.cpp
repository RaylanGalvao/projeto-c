#include <iostream>

using namespace std;

int main(){
    float i, pao;
    cout << "qual o preco do pao voce deseja" << endl;
    cin >> pao;
    cout << "Preco do pao: R$ "<< pao << endl;
    cout << "panificadora pao de ontem - tabela de precos" << endl;
    for (i=1; i<=50; i++){
        cout << i << " - R$ "<< i*pao << endl;
    }

    return 0;
}