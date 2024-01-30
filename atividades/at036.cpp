#include <iostream>

using namespace std;

int main(){
    int dd, mm, aaaa;
    cout << "digite uma data dd/mm/aaaa"<< endl;
    cin >> dd;
    cin >> mm;
    cin >> aaaa;
    if (dd>0 && dd<=31 && mm>0 && mm<=12 && aaaa>0 && aaaa<=2024){
        cout << "essa e uma data valida";
    }else {
        cout << "essa e uma data invalida";        
    }
}