#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero;
    bool primo; 
    cout << "digite um numero para ve se ele e primo" << endl;
    cin >> numero;
    primo=true;
    for (int i=2; i<numero; i++){
        
        if(numero%i==0){
            primo=false;
            cout << "nao e primo";
            break;
        }
    }
    if(primo){
        cout << "primo";
    }

    return 0;
}