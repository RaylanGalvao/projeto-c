#include <iostream>

using namespace std;

int main(){
    float ganhop, horast, salariob, ir, inss, fgts, totald, salariol;
    cout << "quanto voce ganha por hora trabalhada"<< endl;
    cin >> ganhop;
    cout << "quantas horas voce trabalha no mes"<< endl;
    cin >> horast;
    salariob = ganhop * horast;

    cout << "salario bruto: " << salariob << endl;

    if(salariob>2500){
        ir = salariob *0.20;
        cout << "IR: " << ir << endl; 
    }else if (salariob<2499 && salariob>1500){
        ir = salariob *0.10;
        cout << "IR: " << ir << endl;
    }else if (salariob<1499 && salariob>900){
        ir = salariob *0.05;
        cout << "IR: " << ir << endl;
    }else {
        ir = 0;
        cout << "IR: " << ir << endl;
    }
    inss = salariob * 0.10;
    cout << "INSS: " << inss << endl;
    fgts = salariob * 0.11;
    cout << "FGTS: " << fgts << endl;
    totald = ir + inss;
    cout << "total de descontos: " << totald << endl;
    salariol = salariob - totald;
    cout << "salario liquido: " << salariol << endl;
    return 0;
}