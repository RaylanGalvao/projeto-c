#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, res;
    char o;
    cout << "digite dois numeros" << endl;
    cin >> a;
    cin >> b;
    cout << "qual operacao matematica voce deseja fazer"<< endl;
    cin >> o;
    if (o=='+'){
        res=a+b;
    }else if(o=='-'){
        res=a-b;
    }else if(o=='*'){
        res=a*b;
    }else if(o=='/'){
        res=a/b;
    }
    cout << "seu numero e: " << res << endl;
    if ((int)res==0){
        cout << "numero par" << endl;
    }else{
        cout << "numero impar" << endl;
    }
    if (res>0){
        cout << "numero positivo"<< endl;
    }else {
        cout << "numero negativo"<< endl;
    }if (ceil(res)==res){
        cout << "numero inteiro" << endl;
    }else {
        cout << "numero decimal" << endl;
    }

     return 0;
}