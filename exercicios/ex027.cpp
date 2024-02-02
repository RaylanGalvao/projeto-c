#include <iostream>  

using namespace std;

int main (){
    //Enum
    enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};
    armas armaSel;
    armaSel=rifle;
    cout << armaSel;

    return 0;
}