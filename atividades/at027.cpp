#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "digite tres numeros: "<< endl;
    cin >> a;
    cin >> b;
    cin >> c; 
    if (a>b && b>c){
        cout << a << endl << b << endl << c << endl;
    }else if(a>c && c>b){
        cout << a << endl << c << endl << b << endl;
    }else if(b>a && a>c){
        cout << b << endl << a << endl << c << endl;
    }else if(b>c && c>a){
        cout << b << endl << c << endl << a << endl;
    }else if(c>a && a>b){
        cout << c << endl << a << endl << b << endl;
    }else{
        cout << c << endl << b << endl << a << endl;
    }
    return 0;
}