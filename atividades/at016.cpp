#include <iostream>

using namespace std;

int main(){
    float metros, latas, preco, litro;
    cout << "quantos metros quadrados da area a ser pintada"<<endl;
    cin >> metros;
    litro = metros / 3;
    latas = litro / 18;
    preco = latas *80;
    cout << "quantidade de latas de tintas: " << latas <<endl;
    cout << "preco total: " << preco <<  endl;
    return 0;
}