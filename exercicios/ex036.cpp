#include <iostream>

using namespace std;

int main(){

    string veiculo="carro";
    string *pv;

    pv=&veiculo;//ponteiro pv recebe o endereco da variavel veiculo

    cout << veiculo << endl;
    cout << pv << endl;
    cout << *pv << endl;;
    cout << &veiculo << endl;

    *pv="moto";//no endereco apontado por "pv" adicione a moto

    cout << veiculo << endl;
    cout << *pv << endl;

    return 0;
}