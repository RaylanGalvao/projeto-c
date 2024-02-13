#include <iostream>

using namespace std;

struct carro{
    string nome;
    string cor;
    int pot;
    int velmax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelmax){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        velmax=stvelmax;
        vel=0;
    }
    void mostra(){
        cout << "nome             : " << nome << endl;
        cout << "cor              : " << cor << endl;
        cout << "potencia         : " << pot << endl;
        cout << "velocidade atual : " << vel << endl;
        cout << "velocidade maxima: " << velmax << endl<<endl;
    }
    void mudavel(int mv){
        vel=mv;
        if (vel>velmax){
            vel=velmax;
        }if (vel<0){
            vel=0;
        }
    }

};

int main(){

    carro car1, car2, car3, car4;

    car1.insere("tornado", "vermelho", 450, 350);
    car2.insere("luxo", "preto", 250, 260);

    car1.mostra();
    car2.mostra();


    return 0;
}