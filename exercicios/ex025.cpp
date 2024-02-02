#include <iostream>

using namespace std;
void contador(int num, int cont=0)
int main(){
    //funcoes recursivas, recursividades
    contador(20);

    return 0;
}

void contador(int num, int cont){
    cout << cont << endl;
    if (num > cont){
        contador(num, ++cont);
    }
}