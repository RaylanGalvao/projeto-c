#include <iostream>

int n1, n2;// variaveis globais

using namespace std;

int main(){

    //operadores matematicos  + - * / % ()

    int n3, n4;// variaveis locais
    int res1, res2;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

     res1=n1/n2;
     res2=n1%n2;

     cout << "divisao: " << res1 << endl;
     cout << "resto" << res2 << endl;

    return 0;
}