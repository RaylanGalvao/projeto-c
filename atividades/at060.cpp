#include <iostream>

using namespace std;

int main(){

    int termos, numero=1, nanterio=0, aux;
    cout << "digite o numero de termos da serie fibonacci" << endl;
    cin >> termos;
    for (int i=0; i<termos; i++){
        cout << numero << endl;
        aux=numero;
        numero+=nanterio;
        nanterio=aux;
    } 

}