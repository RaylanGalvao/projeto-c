#include <iostream>

using namespace std;

int main(){
    float f, c;
    cout << "temperatura em graus farenheit: ";
    cin >> f;
    c=(f-32)*5/9;
    cout << c << endl;
    return 0;
}