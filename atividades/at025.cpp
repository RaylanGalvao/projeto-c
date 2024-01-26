#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "digite tres numeros: "<< endl;
    cin >> a;
    cin >> b;
    cin >> c; 
   if(a>b && b>c){
    cout << a << endl << c;
   }else if(a>b && c>b){
    cout << a << endl << b;
   }else if (b>a && a>c){
    cout << b << endl << c;
   }else if (b>a && c>a){
    cout << b << endl << a;
   }else if (c>a && a>b){
    cout << c << endl << a;
   }else{
    cout << c << endl << b;
   }
    
    return 0;
}