#include <iostream>

using namespace std;

int main(){
    float i;
    cout << "Lojas Quase Dois - Tabela de preços" << endl;
    for (i=1; i<=50; i++){
        cout << i << " - R$ "<< i*1.99 << endl;
    }

    return 0;
}