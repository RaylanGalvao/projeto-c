#include <iostream>

using namespace std;

int main(){
    int quantas=0, notas=0, total=0;
    char continuar = 's';
    while(continuar=='s'){
    cout << "quantas notas voce deseja" << endl;
    cin >> quantas;
    for (int i=1; i<=quantas; i++){
        cout << "digite a " << i << " nota" << endl;
        cin >> notas;
        total=total+notas;    
    }
    total=total/quantas;
    cout << "total: " << total << endl;
    
    cout << "deseja continuar (s/n)" << endl;
    cin >> continuar;
    }
    return 0;
}