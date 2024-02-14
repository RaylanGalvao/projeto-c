#include <iostream>

using namespace std;

int main(){

    int n[19], p[19], im[19];
    for (int i=0; i<20; i++){
        cin >> n[i];
        if (n[i]%2==0){
            for (int r=0; r<20; r++){
                p[r]=n[i];
            }
        }else if(n[i]%2!=0){
            for (int s=0; s<20; s++){
                im[s]=n[i];
            }
        }
    for (int i=0; i<20; i++){
        cout << n[i] << endl;
        if (p[i]!=0){
            cout << p[i] << endl;
        }else if(im[i]!=0) {
            cout << im[i] << endl;
        }
    }

    }
    return 0;
}