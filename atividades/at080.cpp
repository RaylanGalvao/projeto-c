#include <iostream>

using namespace std; 

int main(){
    int nomema=0, nomemi=0, numero;
    float altura, max=0, min=300;
    int n=10;
    for (int i=1; i<n; i++){
        cout << "qual seu numero"<< endl;
        cin >> numero;
        cout << "qual sua altura"<< endl;
        cin >> altura;
        if(altura>max){
            max=altura;
            nomema=numero;
        }else if(altura<min){
            min=altura;
            nomemi=numero;
        }

    }
    cout << "aluno numero do aluno mais alto: "<< nomema << endl;
    cout << "altura do aluno mais alto: "<< max << endl;
    cout << "aluno numero do aluno mais baixo: "<< nomemi << endl;
    cout << "altura do aluno mais baixo: "<< min << endl;
    

    return 0;
}