#include <iostream>

using namespace std;

int main(){
    int i;
    float codigo, altura, peso, taltura, tpeso;
    float amax=-1000, amin=1000, pmax=-1000, pesomin=1000;
    float n1, n2, n3, n4;
    for (i=0; i<=1000; i++){
        cout << "qual seu codigo" << endl;
        cin >> codigo;
        if (codigo==0){
            break;
        }else {
            cout << "qual sua altura" << endl;
            cin >> altura;
            cout << "qual seu peso" << endl;
            cin >> peso;
            taltura=taltura+altura;
            tpeso=tpeso+peso;

            if(altura>amax){
                amax=altura;
                n1=codigo;
            }
            if(altura<amin){
                amin=altura;
                n2=codigo;
            }
            if(peso>pmax){
                pmax=peso;
                n3=codigo;
            }
            if(peso<pesomin){
                pesomin=peso;
                n4=codigo;
            }
            
        }
    }
    cout << "cliente mais alto: "<< n1 << " altura: " << amax << endl; 
    cout << "cliente mais baixo: "<< n2 << " altura: " << amin << endl; 
    cout << "cliente mais pesado: "<< n3 << " peso: " << pmax << endl; 
    cout << "cliente mais leve: "<< n4 << " peso: " << pesomin << endl; 
    cout << "media de altura: " << taltura/i << endl;
    cout << "media de pesos: " << tpeso/i << endl;


    return 0;
}