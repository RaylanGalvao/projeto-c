#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "digite um numero" << endl;
    cin >> a;
    b = a % 2;
    if(b==0){
        cout << "seu numero e par" << endl;
    }else {
        cout << "seu numero e impar" <<  endl;
    }
    
    return 0;
}