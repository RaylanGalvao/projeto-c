#include <iostream>

using namespace std;

int main(){
    int n, i, f;
    cout << "digite o numero que voce quer o fatorial"<< endl;
    cin >> n;
    f=1;
    for (i=1; i<=n; i++){
        f=f*i;
    }
    cout << "o fatorial de : "<< n << " e: " << f << endl;
    return 0;
}