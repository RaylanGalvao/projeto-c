#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> aula;
    int tam;

    tam=10;
    for (int i=0; i<tam; i++){
        aula.push_front(i);
    }

    cout << "tamanho da lista: "<< aula.size()<< endl << endl;

    tam=aula.size();

    for (int i=0; i<tam; i++){
        cout << aula.front()<< endl;
        aula.pop_front();
    }

    return 0;
}
#include <iostream>
#include <list>
using namespace std;

int main(){
    //inserir elementos em qualquer parte da lista
    list <int> aula;
    int tam;
    list<int>::iterator it;

    tam=10;
    for (int i=0; i<tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it,7);

    aula.insert(it,0);

    cout << "tamanho da lista: "<< aula.size()<< endl << endl;

    tam=aula.size();

    for (int i=0; i<tam; i++){
        cout << aula.front()<< endl;
        aula.pop_front();
    }

    return 0;
}
#include <iostream>
#include <list>
using namespace std;

int main(){
    //reverce
    list <int> aula;
    int tam;
    list<int>::iterator it;

        aula.push_front(9);
        aula.push_front(1);
        aula.push_front(8);
        aula.push_front(2);
        aula.push_front(7);
        aula.push_front(3);
        aula.push_front(6);
        aula.push_front(4);
        aula.push_front(5);

    cout << "tamanho da lista: "<< aula.size()<< endl << endl;

    aula.sort();
    aula.reverse();

    tam=aula.size();

    for (int i=0; i<tam; i++){
        cout << aula.front()<< endl;
        aula.pop_front();
    }

    return 0;
}
