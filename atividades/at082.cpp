#include <iostream> 

using namespace std;

int main(){

    float valordivida, valorjuros, valortotal, valorparcela;
    cout << "digite o valor da divida"<< endl;
    cin >> valordivida;
    int parcelas=1;
    float juros=0.0;
    cout << "valor da divido|valor do juros|quantidade de parcelas|valor da parcela "<< endl;
    while(true){
        juros=(5.0/3.0)*parcelas+5.0;
        if(parcelas==1){
            juros=0;
            valorjuros=valordivida*(juros/100.);
            valortotal=valordivida+valorjuros;
            valorparcela=valortotal/parcelas;

            cout << "valor total: "<< valortotal << endl;
            cout << "valor dos juros "<< valorjuros << endl;
            cout << "parcelas: "<< parcelas << endl;
            cout << "valor das parcelas: "<< valorparcela << endl;
        }
        if (parcelas==1){
            parcelas--;
            parcelas=parcelas+3;

        }
        if(parcelas>12){
            break;
        }
    }

    return 0;
}