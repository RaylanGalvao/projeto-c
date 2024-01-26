#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr (string tra[4]);

int main(){
    texto();

    for (int i=0; i<10; i++){
        texto();
    }
    return 0;

    soma(15,5);

    int res;
    res=soma2(175,25);
    cout << "valor de res: "<< res << endl;
    
    //cout << "valor de res: "<< soma(175,25) << endl;

    string transp[4]={"carro", "moto", "barco", "aviao"};
    tr(transp);
}

void texto (){
    cout << "canal prof raylan" << endl;
}
void soma(int n1, int n2){
    cout << "soma dos valores: "<< n1 + n2 << endl;
}

int soma2(int n1, int n2){
    return n1 +n2;
}

void tr(string tra[4]){
    for (int i = 0; i<4; i++){
        cout << tra[i] << endl;
    }
}