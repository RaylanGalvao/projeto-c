#include <iostream>

using namespace std;

int main(){
    char resposta;
    int positivos = 0;

    cout << "Telefonou para a vitima? (S ou N): " << endl;
    cin >> resposta;
    if (resposta == 'S' || resposta == 's')
        positivos++;
    cout <<"Esteve no local do crime? (S ou N): "<< endl;
    cin >> resposta;
    if (resposta == 'S' || resposta == 's')
        positivos++;
    cout << "Mora perto da vitima? (S ou N): "<< endl;
    cin >> resposta;
    if (resposta == 'S' || resposta == 's')
        positivos++;
    cout << "Devia para a vitima? (S ou N): " << endl;
    cin >> resposta;
    if (resposta == 'S' || resposta == 's')
        positivos++;
    cout << "Já trabalhou com a vitima? (S ou N): "<< endl;
    cin >> resposta;
     if (resposta == 'S' || resposta == 's')
        positivos++;

    if (positivos < 2)
        cout << "Inocente";
    else if (positivos == 2)
        cout << "Suspeita";
    else if (positivos < 5)
        cout << "Cumplice";
    else
        cout << "Assassino";

    return 0;
}