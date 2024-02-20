#include <iostream>

using namespace std;

class Aviao{

public:
    int vel=0;
    int velMax;
    string tipo;
    void ini(int tp);

private:

};

void Aviao::ini(int tp){
    if(tp==1){
        this->velMax=800;
        this->tipo="jato";
    }
    else if(tp==2){
        this->velMax=350;
        this->tipo="monomotor";
    }
    else if(tp==3){
        this->velMax=180;
        this->tipo="planador";
    }
}

int main(){

    Aviao *av1=new Aviao();
    Aviao *av2=new Aviao();
    Aviao *av3=new Aviao();

    av1->ini(1);
    av2->ini(2);
    av3->ini(3);

    cout << av1->velMax << endl;
    cout << av2->velMax << endl;
    cout << av3->velMax << endl;
    return 0;
}