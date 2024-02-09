#include <iostream>

using namespace std;

int main(){

    float salario;
    cout << "digite seu salario inicial" << endl;
    cin >> salario;
    salario=salario+(salario*0.015);
    
    for (int i=1; i<29; i++){
        salario=salario+(salario*0.03);
        cout << "ano de: " << 1996+i << endl;
        cout << "salario: " << salario << endl;
        
    }

    return 0;
}