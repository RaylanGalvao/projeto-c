#include <iostream>

using namespace std;

int main(){
    int n, c, d, u;
    cout << "digite um numero entre 0 e 1000" << endl;
    cin >> n;
    c = n/100;
    d = ((n-(c*100))/10);
    u = (n-(c*100+d*10));
    if (n<=1000 && n>0){
        cout << c << " centenas," << d << " dezenas e " << u << " unidades"; 
    }else{
        cout << "numero invalido";
    }
    return 0;
}