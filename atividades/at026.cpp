#include <iostream>

using namespace std;

int main(){
    float a, b, c;
    cout << "qual o preco dos produtos "<< endl;
    cin >> a;
    cin >> b;
    cin >> c; 
   if (a<b && a<c){
    cout << "compre o primeiro" << endl;
   }else if (b<a && b<c){
    cout << "compre o segundo" << endl;
   }else{
    cout << "compre o terceiro" << endl;
   }
    
    return 0;
}