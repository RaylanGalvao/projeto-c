#include <iostream>

using namespace std;

int main(){

    int idade[5];
    int altura[5];
    for (int i=0; i<5; i++){
        cin >> idade[i];
        cin >> altura[i];
    }
    for (int i=4; i>=0; i--){
        cout << idade[i]<< endl;
        cout << altura[i]<<endl;
    }
    return 0;
}