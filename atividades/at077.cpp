#include <iostream>

using namespace std;

int main(){

    int n, ii, z;
    cout << "qual tabuada voce deseja" << endl;
    cin >> n;
    cout << "qual numero voce deseja comecar a tabuada" << endl;
    cin >> ii;
    cout << "qual numero voce deseja terminar a tabuada" << endl;
    cin >> z;
    if (ii<=z){
        for (int i=ii; i<=z; i++){
            cout << n << " X " << i << " = " << n*i << endl;
        }
    }else{
        cout << "para conseguir a tabuada voce deve digitar o ultimo numero maior que o primeiro" << endl;
    }


    return 0;
}