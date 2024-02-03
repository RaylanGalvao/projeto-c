#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a>b){
        for (int i=b; a>b; b++)
            cout << b << endl;
    }else {
        for (int i=a; b>a; a++)
            cout << a << endl;
    }


    return 0;
}