#include <iostream>

using namespace std;

int main(){
    float tem, temp, min=1000, max=-1000, media=0;
    cout << "quantas temperaturas voce deseja informa"<< endl;
    cin >> tem;
    for(int i=1; i<=tem; i++) {
        cout << "digite a " << i << " temperatura"<< endl;
        cin >> temp;
        media=media+temp;
        if (temp>max){
            max=temp;
        }
        if(temp<min){
            min=temp;
        }
    }
    cout << "a maior temperatura foi: "<< max << endl;
    cout << "a menor temperatura foi: "<< min << endl;
    cout << "a media das temperatura foi: "<< media/tem << endl;


    return 0;
}