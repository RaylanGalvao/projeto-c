#include <iostream>

using namespace std;

int main(){

    int r1, l2;
    cout << "quanto dinheiro voce tem raylan" << endl;
    cin >> r1;
    cout << "quanto dinheiro voce tem leticia" << endl;
    cin >> l2;

    if (r1>l2){
        cout << "raylan e rico" << endl;
    }else {
        cout << "leticia e rica" << endl;
    }

    return 0;
}