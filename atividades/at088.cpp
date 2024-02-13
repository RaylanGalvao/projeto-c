#include <iostream>
#include <string>
using namespace std;

int main(){
    float min=1000, max=-1000;
    char nome[30];
    float nota[6]; 
    float total;
    cout << "digite seu nome" << endl;
    cin >> nome;
    for (int i=0; i<7; i++){
        cout << "digite a " << i+1 << " nota"<< endl;
        cin >> nota[i];
        total=total+nota[i];
        if (nota[i]>max){
            max=nota[i];
        } 
        if (nota[i]<min){
            min=nota[i];
        }
    }

    cout << "primeiro salto: " << nota[0] << endl;
    cout << "segundo salto: " << nota[1] << endl;
    cout << "terceiro salto: " << nota[2] << endl;
    cout << "quarto salto: " << nota[3] << endl;
    cout << "quinto salto: " << nota[4] << endl<<endl;
    cout << "sexta salto: " << nota[5] << endl<<endl;
    cout << "setima salto: " << nota[6] << endl<<endl;

    cout << "melhor salto: " << max << endl;
    cout << "pior salto: " << min << endl;
    total=total-max;
    total=total-min;
    cout << "total: " << total/5 << endl << endl;

    cout << "resultado final: " << endl;
    cout << nome[] << ": " << total/5 << endl;

    
    return 0;
}