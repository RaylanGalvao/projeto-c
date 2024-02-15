#include <iostream>

using namespace std;

int main(){

    int vetor[5];
    int soma=0, mul=0;
    for (int i=0; i<5; i++){
        cin >> vetor[i];
        soma=soma+vetor[i];
        mul=mul*vetor[i];
    }
    cout << "soma: "<<soma<<endl;
    cout << "multiplicacao: "<<mul<<endl;
    for (int i=0; i<5; i++){
        cout << vetor[i]<<endl;
    }


    return 0;
}