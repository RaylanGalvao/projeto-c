#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int codigo, veiculo, acidente, maior=-INFINITY, menor=INFINITY, mediav=0, mediaa=0;
    for(int i=0; i<5; i++){
        cout << "digite o codigo da sua cidade"<< endl;
        cin >> codigo;
        cout << "digite o numero de veiculos em 1999 na sua cidadde"<< endl;
        cin >> veiculo;
        cout << "digite o numero de acidentes em 1999 na sua cidadde"<< endl;
        cin >> acidente;
        mediav=mediav+veiculo;
        if(acidente>maior){
            maior=acidente;
        }else if(acidente<menor){
            menor=acidente;
        }if(acidente<2000){
            mediaa=mediaa+acidente;
        }
        
    }
    cout << "menor indice de acidentes: "<< menor << endl;
    cout << "maior indice de acidentes: "<< maior << endl;
    cout << "media de veiculos nas cinco cidades: "<< mediav/5 << endl;
    cout << "media de acidente de transito nas cidade com menos de 2000 veiculos: "<< mediaa/5 <<endl;  


    return 0;
}