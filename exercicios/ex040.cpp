#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    /*
    d, i => int 
    x, X => hexadecimal
    u => int sem sinal
    s => string, char*
    f => double
    p => ponteiros
    */
    int num1;
    char nome[10];
    scanf("%d %s",&num1, &nome);
    printf("valor da variavel: %d\n Nome: %s\n",num1, nome);

    return 0;
}