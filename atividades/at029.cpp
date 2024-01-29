#include <iostream>

using namespace std;

int main(){
    float sa, va, vp;
    cout << "digite seu salario atual"<< endl;
    cin >> sa;
    if (sa>1500){
        cout << "salario antes do reajuste: "<< sa << endl;
        cout << "aumento de 5%" << endl;
        va = sa * 0.05;
        vp = va + sa;
        cout << "valor do aumento" << va << endl;
        cout << "salario depois do reajuste: "<< vp << endl;
    }else if (sa<1500 && sa>700){
        cout << "salario antes do reajuste: "<< sa << endl;
        cout << "aumento de 10%" << endl;
        va = sa * 0.10;
        vp = va + sa;
        cout << "valor do aumento" << va << endl;
        cout << "salario depois do reajuste: "<< vp << endl;
    }else if (sa<659 && sa>280){
        cout << "salario antes do reajuste: "<< sa << endl;
        cout << "aumento de 15%" << endl;
        va = sa * 0.15;
        vp = va + sa;
        cout << "valor do aumento" << va << endl;
        cout << "salario depois do reajuste: "<< vp << endl;
    }else{
        cout << "salario antes do reajuste: "<< sa << endl;
        cout << "aumento de 20%" << endl;
        va = sa * 0.20;
        vp = va + sa;
        cout << "valor do aumento" << va << endl;
        cout << "salario depois do reajuste: "<< vp << endl;
    }
    
    
    return 0;
}