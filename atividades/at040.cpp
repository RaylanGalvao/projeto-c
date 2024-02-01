#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float r;
    cout << "digite um numero" << endl;
    cin >> r;
    if(ceil(r)==r){
        cout << "numero inteiro";
    }else {
        cout << "numero decimal";
    }
}