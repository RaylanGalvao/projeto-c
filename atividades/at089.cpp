#include <iostream>

using namespace std;

int main(){

    int n, cifra;
    cout << "digite um numero" << endl;
    cin >> n;
    if (n>=0){
        do{
            cifra=n%10;
            cout << cifra;
            n/=10;
        }while(n!=0);
        cout << n;
    }
    return 0;
}