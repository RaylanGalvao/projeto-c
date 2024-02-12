#include <iostream>

using namespace std;

int main(){
    char k, l, m, n, o, p, q, r, s, t;
    cout << "digite o gabarito da prova professor" << endl;
    cout << "1 questao " << endl;
    cin >> k;
    cout << "2 questao " << endl;
    cin >> l;
    cout << "3 questao " << endl;
    cin >> m;
    cout << "4 questao " << endl;
    cin >> n;
    cout << "5 questao " << endl;
    cin >> o;
    cout << "6 questao " << endl;
    cin >> p;
    cout << "7 questao " << endl;
    cin >> q;
    cout << "8 questao " << endl;
    cin >> r;
    cout << "9 questao " << endl;
    cin >> s;
    cout << "10 questao " << endl;
    cin >> t;
    int acertos=0, max=-1000, min=1000, alunos=0, media=0;
    char a, b, c, d, e, f, g, h, i, j;
    char u;
    while(true){
        cout << "prova" << endl;
        cout << "respostas validas a, b, c, d, e" << endl;
        alunos++;
        cout << "1 questao " << endl;
        cin >> a;
        if (a==k){
            acertos++;
        }
        cout << "2 questao " << endl;
        cin >> b;
        if (b==l){
            acertos++;
        }
        cout << "3 questao " << endl;
        cin >> c;
        if (c==m){
            acertos++;
        }
        cout << "4 questao " << endl;
        cin >> d;
        if (d==n){
            acertos++;
        }
        cout << "5 questao " << endl;
        cin >> e;
        if (e==o){
            acertos++;
        }
        cout << "6 questao " << endl;
        cin >> f;
        if (f==p){
            acertos++;
        }
        cout << "7 questao " << endl;
        cin >> g;
        if (g==q){
            acertos++;
        }
        cout << "8 questao " << endl;
        cin >> h;
        if (h==r){
            acertos++;
        }
        cout << "9 questao " << endl;
        cin >> i;
        if (i==s){
            acertos++;
        }
        cout << "10 questao " << endl;
        cin >> j;
        if (j==t){
            acertos++;
        }
        media=acertos/alunos;
        if(acertos>max){
            max=acertos;
        }
        if(acertos<min){
            min=acertos;
        }
        cout << "outro aluno vai ultilizar o sistema s para sim"<<endl;
        cin >> u;
        if (u!='s'){
            break;
        }
    }
    cout << "maior acerto: "<<max<<" menor acerto: "<<min<<endl;
    cout << "total de alunos: " << alunos << endl;
    cout << "media das notas: " << media << endl;

    return 0;
}