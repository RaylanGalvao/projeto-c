#include <iostream>
#define ALUNOS 10
#define NOTAS 4
using namespace std;

int main(){

    float medias[ALUNOS];
    float media = 0, nota;
    int media_sete = 0;
    int i, j;
    for (i=0; i<ALUNOS; i++){
        media=0;
        for (j=0; j<NOTAS; j++){
            cout << "digite a nota "<< j+1 <<" do aluno "<<i+1<<endl;
            cin >> nota;
        }
        medias[i]=media/(float)NOTAS;
        if (medias[i]>=7){
            media_sete++;
        }
    }
    cout << "a media do aluno foi: "<< endl;
    for (i=0; i<ALUNOS; i++){
        cout << "aluno "<<i+1<<" "<< medias[i];

        cout << media_sete <<" alunos tiveram media maior ou igual a sete"<< endl;
    }
    return 0;
}