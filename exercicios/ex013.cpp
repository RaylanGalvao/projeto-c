#include <iostream>

using namespace std;

int main(){

    int n1, n2, nota;
    string res;

    cout << "digite a primeira nota" << endl;
    cin >> n1;
    cout << "digite a segunda nota" << endl;
    cin >> n2;

    nota = n1 + n2;

    /*
    >=60 aprovado
    <60 reprovado
    */    
   (nota >= 60) ? res="aprovado": res="reprovado";
   //res=(nota >= 60) ? "aprovado" : reprovado; 

   cout << "situacao do alunno : " << res << endl;
    cout << res << endl;
    return 0;
}