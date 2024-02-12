#include <iostream>

using namespace std;

int main(){
    int a, b=0, c=0, d=0, e=0, f=0, g=0; 
    float total=0.0;
    while(true){
        cout << "qual lanche voce deseja"<< endl;
        cin >> a;
        if (a==100){
            cout << "quantos cachorro quente voce deseja"<< endl;
            cin >> b;
        }else if(a==101){
            cout << "quantos bauru simples voce deseja"<< endl;
            cin >> c;
        }else if(a==102){
            cout << "quantos bauru com ovo voce deseja"<< endl;
            cin >> d;
        }else if(a==103){
            cout << "quantos hamburguer voce deseja"<< endl;
            cin >> e;
        }else if(a==104){
            cout << "quantos cheeseburgue voce deseja"<< endl;
            cin >> f;
        }else if(a==105){
            cout << "quantos refrigerante voce deseja"<< endl;
            cin >> g;
        }else{
            break;
        }
    }
    total=(b*1.2)+(c*1.3)+(d*1.5)+(e*1.2)+(f*1.3)+(g*1.0);
    cout << "preeco total: "<< total;
    return 0;
}