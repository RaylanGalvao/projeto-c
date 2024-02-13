#include <iostream>
#include <string>
using namespace std;

int main(){
    float min=1000, max=-1000;
    char nome[30];
    float salto[4]; 
    float total=0;
    cout << "digite seu nome" << endl;
    cin >> nome;
    for (int i=0; i<5; i++){
        cout << "digite o " << i+1 << " salto"<< endl;
        cin >> salto[i];
        total=total+salto[i];
        if (salto[i]>max){
            max=salto[i];
        } 
        if (salto[i]<min){
            min=salto[i];
        }
    }

    cout << "primeiro salto: " << salto[0] << endl;
    cout << "segundo salto: " << salto[1] << endl;
    cout << "terceiro salto: " << salto[2] << endl;
    cout << "quarto salto: " << salto[3] << endl;
    cout << "quinto salto: " << salto[4] << endl<<endl;

    cout << "melhor salto: " << max << endl;
    cout << "pior salto: " << min << endl;
    total=total-max;
    total=total-min;
    cout << "total: " << total/3 << endl << endl;

    cout << "resultado final: " << endl;
    cout << nome << ": " << total/3 << endl;

    
    return 0;
}