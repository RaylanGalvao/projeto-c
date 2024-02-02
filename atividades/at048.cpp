#include <iostream>

using namespace std;

int main(){
    char nome[2];
    int idade;
    float salario;
    char sexo, civil; 
    cout << "digite seu nome"<< endl;
    cin >> nome;
    cout << "digite sua idade"<< endl;
    cin >> idade;
    cout << "digite seu salario"<< endl;
    cin >> salario;
    cout << "digite seu sexo 'f' para feminino 'm' para masculino"<< endl;
    cin >> sexo;
    cout << "digite seu estado civil 's' solteiro, 'c', casado, 'v', viuvo e 'd' divorciado"<< endl;
    cin >> civil;

    return 0;
}