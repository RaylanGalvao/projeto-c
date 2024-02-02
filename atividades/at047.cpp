#include <iostream>
#include <cstring>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
    char usuario[50], senha[50];
    cout << "digite o nome de usuario"<< endl;
    cin >> usuario;
    cout << "digite sua senha" << endl;
    cin >> senha;
    while( !strcmp( usuario, senha ) ){
        cout << "digite o nome de usuario"<< endl;
        cin >> usuario;
        cout << "digite sua senha" << endl;
        cin >> senha;
    }
    return 0;
}