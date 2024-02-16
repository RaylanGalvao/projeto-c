#include <iostream>

using namespace std;

int main(){

    int temp[12];
    int media=0;
    for (int i=0; i<12; i++){
        cout << "digite a temperatura do mes: "<< i+1 << endl;
        cin >> temp[i];
        media=media+temp[i];
    }
    media=media/12;
    cout << "temperaturas acima da media" << endl;
    for (int i=0; i<12; i++){
        if (temp[i]>media){
            cout << temp[i] << endl;
            if(temp[0]==temp[i]){
                cout << "janeiro" << endl;
            }
            else if(temp[1]==temp[i]){
                cout << "fevereiro";
            }
            else if(temp[2]==temp[i]){
                cout << "marco";
            }
            else if(temp[3]==temp[i]){
                cout << "abril";
            }
            else if(temp[4]==temp[i]){
                cout << "maio";
            }
            else if(temp[5]==temp[i]){
                cout << "junho";
            }
            else if(temp[6]==temp[i]){
                cout << "julho";
            }
            else if(temp[7]==temp[i]){
                cout << "agosto";
            }
            else if(temp[8]==temp[i]){
                cout << "setembro";
            }
            else if(temp[9]==temp[i]){
                cout << "outubro";
            }
            else if(temp[10]==temp[i]){
                cout << "novembro";
            }
            else if (temp[11]==temp[i]){
                cout << "dezembro";
            }
        }
    }


    return 0;
}