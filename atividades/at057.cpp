#include <iostream>

using namespace std;

int main(){
    int num, soma;
    cout << "digite o numero de qual voce quer ver a tabuada"<< endl;
    cin >> num;
    for (int i=1; i<=10; i++){
        soma=num*i;
        cout << num  << "X" << i << "=" << soma << endl;
        
    }

    return 0;
}