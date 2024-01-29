#include <iostream>

using namespace std;

int main(){
    char a;
    cout << "qual turno voce estuda "<< endl;
    cout << "M-matutino, V-vespertino, N-noturno"<< endl;
    cin >> a;
    switch (a){
        case 'm':
        cout << "bom dia";
        break;
        case 'v':
        cout << "boa tarde";
        break;
        case 'n':
        cout << "boa noite";
        break;
        default:
        cout << "valor invalido";
    }
    return 0;
}