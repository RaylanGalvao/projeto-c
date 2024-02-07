#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero, i;
    bool primo; 
    cout << "digite um numero para ve se ele e primo" << endl;
    cin >> numero;
    primo=true;
    for (i=2; i<numero; i++){
        while(numero%i==0){
            primo=false;
            cout << "divisivel por: " << i << endl;
            break;
        }
    }if (primo==false){
            cout << "nao e primo"<< endl;
        }
    else{
        cout << "primo";
    }

    return 0;
}