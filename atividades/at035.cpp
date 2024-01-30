#include <iostream>

using namespace std;

int main(){
    int ano, mod;
    cout << "digite um ano" << endl;
    cin >> ano;
    mod = ano % 4;
    if (mod==0){
        cout << "ano bissexto"<< endl;
    }else {
        cout << "ano nao e bissexto" << endl;
    }
     
    return 0;
}