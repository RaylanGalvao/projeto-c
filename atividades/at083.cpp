#include <iostream>

using namespace std;

int main(){
    int a=0, b=0, c=0, d=0, e=0;
    while(a>-1){
        cout << "digite um numero"<< endl;
        cin >> a;
        if (a>=0 && a<=25){
            b++;
        }else if(a>=26 && a<=50){
            c++;
        }else if(a>=51 && a<=75){
            d++;
        }else if(a>=76 && a<=100){
            e++;
        }
        
    }
    cout << b <<" "<< c <<" "<< d <<" "<< e << endl;
    return 0;
}