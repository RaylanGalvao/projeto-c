#include <iostream>
#include "classes.h"

using namespace std;

int main(){

    veiculo *v1=new veiculo(1);
    veiculo *v2=new veiculo(2);
    veiculo *v3=new veiculo(3);

    //v1->setLigado(0);
    v2->setLigado(1);
    //v3->setLigado(1);

    cout << v1->getVelMax()<< endl;
    cout << v2->getVelMax()<< endl;
    cout << v3->getVelMax()<< endl;

    if(v1->getLigado()){
        cout << "veiculo 1 esta lidado"<< endl;
    }else {
        cout << "veiculo 1 esta desligado"<< endl;        
    }
    if(v2->getLigado()){
        cout << "veiculo 2 esta lidado"<< endl;
    }else {
        cout << "veiculo 2 esta desligado"<< endl;        
    }
    if(v3->getLigado()){
        cout << "veiculo 3 esta lidado"<< endl;
    }else {
        cout << "veiculo 3 esta desligado"<< endl;        
    }

    return 0;
}