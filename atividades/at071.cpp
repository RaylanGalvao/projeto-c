#include <iostream>

using namespace std;

int main(){

    int turmas, alunos, media=0;
    cout << "quantas turmas voce deseja saber a media por auluno"<< endl;
    cin >> turmas;
    for (int i=1; i<=turmas; i++){
        cout << "quantos alunos tem na "<< i << " sala"<< endl; 
        cin >> alunos;
        if (alunos>40){
            cout << "as turmas nao podem conter mais que 40 alunos"<< endl;
            break;
            
        }else {
            media=media+alunos;
        }
    }
    if (alunos<=40){
        media=media/turmas;
        cout << "a media de aluno por sala e: "<< media << endl;
    }
    
    return 0;
}