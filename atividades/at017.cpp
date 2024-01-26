#include <iostream>

using namespace std;

int main(){
    float metros, latas, preco, litro, galoes, preco2 ,lg;
    cout << "quantos metros quadrados da area a ser pintada"<<endl;
    cin >> metros;

    litro = metros / 6;
    latas = litro / 18;
    preco = latas *80;
    galoes = litro / 3.6;
    preco = galoes * 80; 
    lg = (latas + galoes)/21.6;

    cout << "somente latas: " << latas <<endl;
    cout << "somente galoes: " << galoes <<  endl;
    cout << "latas e galoes" << lg << endl; 

    return 0;
}