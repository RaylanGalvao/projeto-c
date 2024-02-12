#include <iostream>

using namespace std;

struct carro{
    string nome;
    string cor;
    int pot;
    int vmax;
};

int main(){

    carro car1;
    carro car2;

    car1.nome="tornado";
    car1.cor="vermelho";
    car1.pot=450;
    car1.vmax=350;

    car2.nome="luxo";
    car2.cor="preto";
    car2.pot=250;
    car2.vmax=260;

    cout << "nome             : " << car1.nome << endl;
    cout << "cor              : " << car1.cor << endl;
    cout << "potencia         : " << car1.pot << endl;
    cout << "velocidade maxima: " << car1.vmax << endl<<endl;

    cout << "nome             : " << car2.nome << endl;
    cout << "cor              : " << car2.cor << endl;
    cout << "potencia         : " << car2.pot << endl;
    cout << "velocidade maxima: " << car2.vmax << endl;

    return 0;
}