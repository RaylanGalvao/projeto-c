#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    int num;
    int pares=0, impares=0;
    for(int i=1; i<=10; i++){
        cout << "digite o numero: "<<i<< endl;
        cin >> num;
        if((num%2)==0){
            pares++;
        }else {
            impares++;
        }
    }
            cout << "pares: " << pares << " impares: " << impares << endl;
    return 0;
}