#include <iostream>

using namespace std;

int main(){
    int n, q=0;
    int v[q];
    int total=0, media, acima=0, abaixo=0;
    cout << "digite os valores" << endl;
    while (true){
        cin >> n; 
        if(n==-1){
            break;
        }else {
            v[q]=n;
            q++;
        }
    }
    cout << "quantidade de valores: "<< q << endl;
    cout << "valores lidos um ao lado do outro: " ;
    for (int i=0; i<q; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "valores invetidos um abaixo do outro: "<< endl;
    for (int i=(q-1); i>=0; i--){
        cout << v[i] << endl;
        total=total+v[i];
    }
    cout << "total: "<< total << endl;
    media=total/q;
    cout << "media: "<< media << endl;
    for (int i=0; i<q; i++){
        if (v[i]>media){
            acima++;
        }
        if (v[i]<7){
            abaixo++;
        }
    }
    cout << "quantidade de valores acima da media: "<< acima << endl;
    cout << "quantidade de valores abaixo da sete: "<< abaixo << endl;
    cout << "fim do programa" << endl;
    return 0;
}