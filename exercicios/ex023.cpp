#include <iostream>

using namespace std;
//sobrecarga de funcoes
void soma();
void soma(int n1, int n2);
int main(){
    soma(20,30);
    soma();
}

void soma(int n1, int n2){
    int re;
    re=n1+n2;
    cout << "soma de " << n1 << " com " << n2 << " = " << re << endl;   
}

void soma(){
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;
    cout << "soma de " << n1 << " com " << n2 << " = " << re << endl;
}
