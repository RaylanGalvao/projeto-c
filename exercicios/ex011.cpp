#include <iostream>

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio:

    cout << "digite o valor da nota 1" << endl;
    cin >> n1;
    cout << "digite o valor da nota 2" << endl;
    cin >> n2;

    res=n1+n2;
 
    /*
    >=60  aprovado
    >=40 recuperação
    <40 reprovado
    */

    if(res >= 60){
        cout << "aluno aprovado" << endl;
    }else if(res >= 40){
        cout << "aluno recuperacao" << endl ;
    }else{
        cout << "aluno reprovado" << endl ;
    }

    cout << "digitar outras notas?[s/n]:" << endl;
    cin >> opc;

    if (opc == 's' or opc =='S')
        goto inicio;
    if (opc)

    return 0;
}