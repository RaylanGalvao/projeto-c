#include <iostream>

using namespace std;

int main(){

    float vetor[9];
    for (int i=0; i<10; i++){
        cin >> vetor[i];
    }
    for (int i=10; i>0; i--){
        cout << vetor[i] << endl;
    }
    return 0;
}