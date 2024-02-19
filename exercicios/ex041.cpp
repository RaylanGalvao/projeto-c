#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    float pi=M_PI;
    printf("valor de pi com duas casas decimais: %.2f\n",pi);

    int num1; 
    printf("valor com zeros a esquerda: %07d\n", num1);
    
    int num2; 
    printf("valor com zeros a esquerda e dois numeros a direita: %07.2d", num2);

    int num3=10;
    cout << "valor em decimal: "<< num3 << endl;
    cout << "valor em hexadecimal: "<< hex << num3 << endl;
    cout << "valor em octal: "<< oct << num3 << endl;
    cout << "valor em hexadecimal: "<< setbase(16) << num3 << endl;
    cout << "valor em octal: "<< setbase(8) << num3 << endl;
    cout << "valor em decimal: "<< setbase(10) << num3 << endl;

    int pi1=M_PI;
    cout.precision(5);
    cout << "valor de pi com precisao: "<< pi1 <<endl;
    
    int pi2=M_PI;
    cout.precision(-1);
    cout << "precisao normal: " << pi2 << endl;
    cout << "pi com notacao cientifica: " << std::scientific << pi2 << endl;

    int num=30;
    cout << "valor de num: "<< setw(10) << setfill('0') << num << endl;

    return 0;
}