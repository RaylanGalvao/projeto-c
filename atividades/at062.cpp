#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num, max=-INFINITY, min=INFINITY, res ,total=1;
    cout << "quantos numeros voce vai querer"<< endl;
    cin >> num;
    for (int i=1; i<=num; i++){
        cout << "digite o numero: "<< i << endl;
        cin >> res;
        total=total+res;
        if (res>max){
            max=res;
        }
        if(res<min){
            min=res;
        }
        
    }
    cout << "maximo: " << max << " minino: " << min << endl;
    cout << "total: " << total-1 << endl;
    return 0;
}