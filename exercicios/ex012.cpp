#include <iostream>

using namespace std;

int main(){
    int num;
    /*
    123456789
    >4 e <7
    */
   num =1;

   if((num >= 3 && num <= 6) || (num > 9 && num <15) || (num > 15 && num < 20)){
    cout << "\n\nvalor aceito" << endl;
   }else {
    cout << "nao acceito" << endl ;
   }
   

   if (num){
    cout << "vou ao clube";
   }else{
    cout << "vou ao cinema"
   }
}