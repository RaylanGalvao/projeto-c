#include <iostream>

using namespace std;

int main(){
    bool continuar = true;
    char continuarstr;

    float popuA, popuB, cresA, cresB;
    int anos;

    while(continuar){
        cout << "digite a populacao de a: " << endl;
        cin >> popuA;
        cout << "digite a populacao de b: " << endl;
        cin >> popuB;
        cout << "digite o crecimento de a: "<< endl;
        cin >> cresA;
        cout << "digite o crecimento de b: "<< endl;
        cin >> cresB;
        anos=0;
        while (true){
            anos++;
            popuA=popuA*(1+(cresA/100));
            popuB=popuB*(1+(cresB/100));
            if (popuA>popuB){
                cout << "a populacao de a demorou para passar a de b" << anos << " anos"<<endl;
                cout << "a tem: " << popuA << " b tem: " << popuB << endl;
                break;
            }
        }
        cout << "deseja continuar(s/n)"<< endl;
        cin >> continuarstr;
        continuar = continuarstr=='s' || continuarstr=='S' ? true : false;
    }
    return 0;
}