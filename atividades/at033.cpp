#include <iostream>

using namespace std;

int main(){
    float a, b, c;
    cout << "digite os tres lados do triangulo" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == b && b == c){
        cout << "triangulo equilatero";
    }else if (a!=b && a!=c && b!=c){
        cout << "triangulo escaleno";
    }else {
        cout << "triangulo isosceles";
    }

    return 0;
}