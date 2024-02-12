#include <iostream>

using namespace std;

int main(){
    int voto;
    int joao=0, jose=0, antonio=0, francisco=0, nulo=0, branco=0, total=0;
    int pn=0, pb=0;
    cout << "tabela de informacoes sobre candidatos a eleicao"<< endl;
    cout << "digite 1 para votar em joao" << endl;
    cout << "digite 2 para votar em jose" << endl;
    cout << "digite 3 para votar em antonio" << endl;
    cout << "digite 4 para votar em francisco" << endl;
    cout << "digite 5 para votar nulo" << endl;
    cout << "digite 6 para votar em branco" << endl;

    while(true){
        cout << "digite seu voto"<< endl;
        cin >> voto;
        if(voto==1 || voto==2 || voto==3 || voto==4 || voto==5 || voto==6){
            total++;
        if(voto==1){
            joao++;
        }else if (voto==2){
            jose++;
        }else if (voto==3){
            antonio++;
        }else if (voto==4){
            francisco++;
        }else if(voto==5){
            nulo++;
        }else if(voto==6){
            branco++;
        } 
        }
        else{
            break;
        }
    }
    cout << "total de votos para cada candidato"<<endl;
    cout << "joao: "<< joao << endl;
    cout << "jose: "<< jose << endl;
    cout << "antonio: "<< antonio << endl;
    cout << "francisco: "<< francisco << endl;
    cout << "nulo: "<< nulo << endl;
    cout << "branco: "<< branco << endl;
    cout << "total de votos: " << total << endl;
    pn=100*(nulo/total);
    cout << "a porcentagem de votos nulos sobre o total de votos foi: "<< pn << endl;
    pb=100*(branco/total);
    cout << "a porcentagem de votos em branco sobre o total de votos foi: "<< pb << endl;
    return 0;
}