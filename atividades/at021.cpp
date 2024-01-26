#include <iostream>

using namespace std;

int main(){
    char a;
    cout << "digite f ou m "<< endl;
    cin >> a;
    switch (a){
        case 'f':
        cout << "feminino";
        break;
        case 'm':
        cout << "masculino";
        break;
        default:
        cout << "letra invalida";
    }
    return 0;
}