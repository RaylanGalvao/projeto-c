#include <iostream>

using namespace std;

int main(){
    float a, b, media;
    cout << "digite suas notas" << endl;
    cin >> a;
    cin >> b;
    media = (a + b)/2; 
    if (media<=10 && media>=9){
        cout << "nota 1: " << a << endl;
        cout << "nota 2: " << b << endl;
        cout << "media: " << media << endl;
        cout << "Aprovado: tirou A "<< endl;
    }else if (media<8.9 && media>=7.5 ){
        cout << "nota 1: " << a << endl;
        cout << "nota 2: " << b << endl;
        cout << "media: " << media << endl;
        cout << "Aprovado: tirou B "<< endl;
    }else if (media<7.4 && media>=6.0 ){
        cout << "nota 1: " << a << endl;
        cout << "nota 2: " << b << endl;
        cout << "media: " << media << endl;
        cout << "Aprovado: tirou C "<< endl;
    }else if (media<5.9 && media>=4 ){
        cout << "nota 1: " << a << endl;
        cout << "nota 2: " << b << endl;
        cout << "media: " << media << endl;
        cout << "Reprovado: tirou D "<< endl;
    }else if (media<3.9 && media>=0){
        cout << "nota 1: " << a << endl;
        cout << "nota 2: " << a << endl;
        cout << "media: " << media << endl;
        cout << "Reprovado: tirou E"<< endl;
    }
    return 0;
}