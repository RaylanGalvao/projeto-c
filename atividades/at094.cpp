#include <iostream>

using namespace std;

int main(){

    int nota[4];
    int media=0;
    for(int i=1; i<=4; i++){
        cout << "digite a "<< i << " nota"<< endl;
        cin >> nota[i];
        media=media+nota[i];
    }
    cout << "media das notas: "<< media/4 << endl;

    return 0;
}