#include <iostream>

using namespace std;

int main(){
    int a, b, total=1;
    cout << "digite a base e o expoente da potencia"<< endl;
    cin >> a;
    cin >> b;
    for (int i=0; i<b; i++){
        total=total*a;
    }
    cout << "total: "<< total << endl;
    return 0;
}