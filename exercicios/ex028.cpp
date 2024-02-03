#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <string> cartas;
    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da pilha: "<< cartas.size() <<endl;

    cout << "carta do topo: " << cartas.top() << endl;

    cartas.pop();
    cartas.pop();

    cout << "nova carta do topo: "<< cartas.top() <<endl;

    return 0;
}