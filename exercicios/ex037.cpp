#include <iostream>

using namespace std;

int main(){

    int *p;
    int vetor[10];
    /*p=&vetor[0];//p=vetor
    cout << endl << p << endl;
    p=&vetor[1];//p=vetor
    cout << endl << p << endl;
    p=&vetor[2];//p=vetor
    cout << endl << p << endl;
    (p+=1);
    cout << endl << p << endl;
    (p+=1);
    cout << endl << p << endl;*/
    p=&vetor[0];
    *p=10;
    cout << endl << vetor[0] << endl;
    *(p+=1);
    *p=20;
    cout << endl << vetor[1] << endl;
    return 0;
}