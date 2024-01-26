#include <iostream>

using namespace std;

int main(){
    int a, b, total;
    cout << "digite suas notas "<< endl;
    cin >> a;
    cin >> b;
    total = (a+b)/2; 
   if (total>=10){
    cout << "aprovado com distincao";
   }else if (total>=7){
    cout << "Aprovado";
   }else{
    cout << "Reprovado";
   }
    
    return 0;
}