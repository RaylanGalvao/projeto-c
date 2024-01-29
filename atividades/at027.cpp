#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "digite tres numeros: "<< endl;
    cin >> a;
    cin >> b;
    cin >> c; 
    if (a>b && b>c){
        cout << a << b << c;
    }
    return 0;
}