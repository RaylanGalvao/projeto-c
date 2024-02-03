#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float total=0.0, aux;
    for (int i=0; i<5; i++){
        cout << "digite um numero" << endl;
        cin >> aux;
        total=total+aux;

    }
    cout << total << endl;
    cout << "media: "<< total/5;

    return 0;
}