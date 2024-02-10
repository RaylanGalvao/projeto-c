#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> aula, teste;
    int tam;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);


    tam=10;
    for (int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it, 3);//adiciona uma posicao na lista
    aula.insert(it, 0);//adiciona um elemento na posicao criada

    aula.erase(--it);//elimina a posicao e o elemento criado

    aula.clear();//metodo para limpar a lista sem precisar do for

    aula.merge(teste);//mescla os elementos das listas

    cout << "tamanho da lista: "<< aula.size()<< endl << endl;

    tam=aula.size();
    for (int i=0; i<tam; i++){
        cout << aula.front()<< endl;
        aula.pop_front();
    }

    cout << "tamanho da lista: "<< aula.size()<< endl << endl;

    return 0;
}
