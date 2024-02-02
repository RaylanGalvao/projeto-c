#include <iostream>

using namespace std;

int main(){
    char c, d;
    float kilos, total, des;
    cout << "qual carne voce deseja comprar digite 'f' para file 'a' para alcatra e 'p' para picanha" << endl;
    cin >> c;
    cout << "quantos kilos voce deseja comprar" << endl;
    cin >> kilos;
    cout << "forma de pagamento"<< endl;
    cin >> d;
    if (c=='f'){
        cout << "cupom fiscal" << endl;
        cout << "tipo de carne: file dulo" << endl;
        cout << "quantadade de carne: "<< kilos << endl;
        if(kilos>5){
            total=kilos*4.9;
        }else{
            total=kilos*5.8;
        }
        if (d=='s'){
            des=total*0.05;
            total=total-des;
            cout << "preco total" << total << endl;
            cout << "cartao tabajara" << endl;
            cout << "desconto de: "<< des << endl;
        }else{
            cout << "preco total: " << total << endl;
            cout << d << endl;
            cout << "desconto de: 0 " << endl;
        }

    }else if (c=='a'){
        cout << "cupom fiscal" << endl;
        cout << "tipo de carne: alcatra" << endl;
        cout << "quantadade de carne: "<< kilos << endl;
        if(kilos>5){
            total=kilos*5.9;
        }else{
            total=kilos*6.8;
        }
        if (d=='s'){
            des=total*0.05;
            total=total-des;
            cout << "preco total: " << total << endl;
            cout << "cartao tabajara" << endl;
            cout << "desconto de: "<< des << endl;
        }else{
            cout << "preco total: " << total << endl;
            cout << d << endl;
            cout << "desconto de: 0 " << endl;
        }
    }else{
        cout << "cupom fiscal" << endl;
        cout << "tipo de carne: picanha" << endl;
        cout << "quantadade de carne: "<< kilos << endl;
        if(kilos>5){
            total=kilos*6.9;
        }else{
            total=kilos*7.8;
        }
        if (d=='s'){
            des=total*0.05;
            total=total-des;
            cout << "preco total: " << total << endl;
            cout << "cartao tabajara" << endl;
            cout << "desconto de: "<< des << endl;
        }else{
            cout << "preco total" << total << endl;
            cout << d << endl;
            cout << "desconto de: 0 " << endl;
        }
    }
    return 0;
}