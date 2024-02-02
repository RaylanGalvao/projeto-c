#include <iostream>

using namespace std;

int main(){
        char c;
    double  g, a , ad, gd;
    cout << "qual combustivel voce deseja comprar"<< endl;
    cout << "Digite A para Alcool e G para Gasolina" << endl;
    cin >> c;
    if (c=='a' || c=='A'){
        cout << "quantos litros voce deseja"<< endl;
        cin >> a;
        if (a>20){
            ad=a*0.05;
            a=a-ad;
            a=a*1.9;
            cout << "o valor a ser pago sera: " << a << endl;
        }else{
            ad=a*0.03;
            a=a-ad;
            a=a*1.9;
            cout << "o valor a ser pago sera: " << a << endl;
        }
    }else {
        cout << "quantos litros voce deseja"<< endl;
        cin >> g;
        if (g>20){
            gd=g*0.04;
            g=g-gd;
            g=g*2.5;
            cout << "o valor a ser pago sera: " << g << endl;
        }else{
            gd=g*0.06;
            g=g-gd;
            g=g*2.5;
            cout << "o valor a ser pago sera: " << g << endl;
        }
    }

    return 0;
}