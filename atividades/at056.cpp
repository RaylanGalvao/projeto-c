#include <iostream>

using namespace std;

int main(){
    int a, b, total;
    cout << "digite 2 numeros" << endl;
    cin >> a >> b;
    if (a>b){
        total=0;
        for (int i=b; a>=b; b++)
            cout << b << endl;
            total=total+b;
    }else {
        total=0;
        for (int i=a; b>=a; a++){
            cout << a << endl;
            total=total+a;
    }
    }
    cout << "total: "<< total << endl;

    return 0;
}