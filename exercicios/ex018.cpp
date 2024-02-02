#include <iostream>

using namespace std;
//comando do loop for
int main(){
    /*
    for(iniciacao; condicional; incremento/decremento){
        comandos
    }
    */
    int x,y,z;

    for (x=0,y=1,z=0; x<=10,z<=6; x++,y+=2,z+=2){
        cout << x << "-" << y << "-" << z << endl;
    }
    return 0;
}