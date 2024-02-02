#include <iostream>

using namespace std;

int main(){
    float morango, maca, total;
    cout << "quantos kilos de morango voce deseja" << endl;
    cin >> morango;
    cout << "quantos kilos de maca voce deseja" << endl;
    cin >> maca;
    if (morango > 5){
        morango=morango*2.2;
    }else{
        morango=morango*2.5;
    }if(maca>5){
        maca=maca*1.5;
    }else{
        maca=maca*1.8;
    }
    total=morango+maca;
    if (total>25){
        total=total-(total*0.1);
        cout << "o valor a ser pago sera: " << total << endl; 
    }else {
        cout << "o valor a ser pago sera: " << total << endl;
    }

    return 0;
}