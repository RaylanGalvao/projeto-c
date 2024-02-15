#include <iostream>

using namespace std;

int main(){
    int soma=0;
    int a[10];
    for(int i=0; i<10; i++){
        cin >> a[i];
        soma=soma+(a[i]*a[i]);
    }
    cout << "soma dos quadrados dos numeros digitados: "<<soma<<endl;
    return 0;
}