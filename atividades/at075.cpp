#include <iostream>

using namespace std;

int main(){
    bool volta=true;
    while(volta==true){
    float produto, dinheiro, total=0;
    cout << "bem vindo a lojas tabajara"<< endl;
    for (int i=1; i>=0; i++){
        cout << "produto "<< i << ": R$ ";
        cin >> produto;
        if (produto==0){
            break;
        }
        total=total+produto;
    }
    cout << "total: R$ "<< total << endl;  
    cout << "diheiro: R$ ";
    cin >> dinheiro;
    cout << "troco: R$ "<< dinheiro-total << endl;  

    }

    return 0;
}