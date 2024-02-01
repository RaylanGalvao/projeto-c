#include <iostream>

using namespace std;

int main(){
    int valor, nota1, nota5, nota10, nota50, nota100;
    cout << "digite o valor que deseja sacar"<< endl;
    cout << "valor minimo 10 reais valor maximo 600 reais" << endl;
    cin >> valor;
    nota100=valor/100;
    valor=valor-(nota100*100);
    nota50=valor/50;
    valor=valor-(nota50*50);
    nota10=valor/10;
    valor=valor-(nota10*10);
    nota5=valor/5;
    valor=valor-(nota5*5);
    nota1=valor;
    if (nota100>0){
        cout << nota100 << " notas de 100" << endl;
    }if(nota50>0){
        cout << nota50 << " notas de 50" << endl;
    }if(nota10>0){
        cout << nota10 << " notas de 10" << endl;
    }if(nota5>0){
        cout << nota5 << " notas de 5" << endl;
    }if(nota1>0){
        cout << nota1 << " notas de 1" << endl;
    }
    return 0;
}