#include <iostream>

using namespace std;

int main(){
    int quantos, eleitor, a=0, b=0, c=0;
    cout << "quantas eleitores iram votar" << endl;
    cin >> quantos;
    cout << "digite 1 para o primeiro candidato, 2 para o segundo candidato e 3 para o terceito candidato"<< endl;
    for (int i=1; i<=quantos; i++){
        cout << "digite seu voto " << i << " eleitor" << endl;
        cin >> eleitor;
        
        if (eleitor==1){
            a++;
        }else if(eleitor==2){
            b++;
        }else{
            c++;
        }

    }
    if (a>b && a>c){
        cout << "o primeiro candidato ganhou";
    }else if(b>a && b>c){
        cout << "o segundo candidato ganhou";
    }else {
        cout << "o terceiro candidato ganhou";
    }
    return 0;
}