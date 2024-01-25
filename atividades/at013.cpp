#include <iostream>

using namespace std;

int main(){
    float a, ph, pm;
    cout << "digite sua altura: " << endl;
    cin >> a;
    ph=(72.7*a)-58;
    pm=(62.1*a)-44.7;
    cout<<"para homens: "<<ph<<endl;
    cout<<"para mulheres: "<<pm<<endl;

    return 0;
}