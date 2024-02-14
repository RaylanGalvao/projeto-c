#include <iostream>

using namespace std;

int main(){
    int q=0;
    char l[9];
    for (int i=0; i<10; i++){
        cin >> l[i];
        if (l[i]=='a' || l[i]=='e' || l[i]=='i' || l[i]=='o' || l[i]=='u'){
            
        }else{
            q++;
        }
    }
    cout << "quantidade de consoantes: "<< q << endl;
 
    return 0;
}