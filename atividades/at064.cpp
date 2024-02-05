#include <iostream>

using namespace std;

int main(){
    char continuar;
    int n, i, f;
    do{
    cout << "digite o numero que voce quer o fatorial"<< endl;
    cin >> n;
    if (n>0 && n<=16){
    f=1;
    for (i=1; i<=n; i++){
        f=f*i;
    }
    cout << "o fatorial de : "<< n << " e: " << f << endl;
    }else {
        cout << "o numero que voce digitou e invalido"<< endl;
    }
    cout << "digite s para continuar"<< endl;
    cin >> continuar;
    }while(continuar=='s' || continuar=='S');
    return 0;
}
