#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, res, ;
    char o;
    cout << "digite dois numeros" << endl;
    cin >> a,b;
    cout << "qual operacao matematica voce deseja fazer"<< endl;
    cin >> o;
    return 0;
    switch(0){
        case '+':
        res=a+b;
        break;
        case '-':
        res=a-b;
        break;
        case '*':
        res=a*b;
        break;
        case '/':
        res=a/b;
        break;
    }

    cout << "resultado: " << res << endl;
    if (res%2=0){
        cout << "numero par";
    }else{
        cout << "numero impar";
    }if (res>0){
        cout << "numero positivo";
    }else {
        cout << "numero negativo";
    }if (ceil(res)==res){
        cout << "numero decimal";
    }else {
        cout << "numero inteiro";
    }

}