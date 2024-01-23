#include <iostream>

using namespace std;

int main(){
    int val;
    cout << "selecione uma cor: " << endl;
    cout << "[1]= facil, [2]=medio, [3]dificil"<< endl;
    cin >> val;
    switch (val){
        case 1:
        cout << "nivel facil" << endl;
        break;
        case 2:
        cout << "nivel medio" << endl;
        break;
        case 3:
        cout << "nivel dificil" << endl;
        break;
        default:
        cout << "valor selecionado invalido" << endl;
    }
    return 0;
}