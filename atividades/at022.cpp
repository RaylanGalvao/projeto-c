#include <iostream>

using namespace std;

int main(){
    char a;
    cout << "digite uma letra "<< endl;
    cin >> a;
    switch (a){
        case 'a':
        cout << "vogal";
        break;
        case 'e':
        cout << "vogal";
        break;
        case 'i':
        cout << "vogal";
        break;
        case 'o':
        cout << "vogal";
        break;
        case 'u':
        cout << "vogal";
        break;
        default:
        cout << "consoante";
    }
    return 0;
}