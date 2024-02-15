#include <iostream>

using namespace std;
int main(){

    int idades[5];
    float altura[5];
    float media=0;
    int baixa=0;
    for (int i=0; i<5; i++){
        cin >> idades[i];
        cin >> altura[i];
        media=media+altura[i];
    }
    media=media/5;
    for(int i=0; i<5; i++){
        if(altura[i]<media){
            baixa++;
        }
    }
    cout << "alunos com mais de 13 anos com a altura menor que a media: "<< baixa << endl;

    return 0;
}