#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "digite um numero inteiro"<< endl;
    cin >> n;
    
    if(n==1 || n==2){
        cout << "nao e primo r foram executasas 0 divisoes"<< endl;
    }else if(n%2==0){
        cout << "nao e primo e foi exercutada uma divisao para descobrir isso"<< endl;
    }else{
        int contador=1;
        bool primo = true;
        for (int i=3; i<n; i+=2){
            contador++;
            if(n%i==0){
                primo = false;
                break;
            }
        }
        if (primo){
            cout << "e primo e foram executadas: "<< contador << endl;
        }else{
            cout << "nao e promo e foram exercutadas: "<< contador << endl;
        }

    }

    return 0;
}