#include <iostream>

using namespace std;

int main(){
    int valor, nota1, nota5, nota10, nota50, nota100;
    cout << "digite o valor que deseja sacar"<< endl;
    cin >> valor;
    nota100 = valor / 100;
    nota10 = (valor-(nota100*100))/10;
    nota1 = (valor-(nota100*100+nota10*10));
    if (valor>=10 && valor<=600){
        cout << nota100 << " notas de 100, "<< nota10 << " notas de 10, e "<< nota1 <<  " notas de 1 ";
    }else {
        cout << "valor minimo 10 reais valor maximo 600 reais";
    }

    return 0;
}