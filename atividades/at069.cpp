#include <iostream>

using namespace std;

int main(){
    int quantas=0, idade=0, total=0;

    cout << "quantas idades voce deseja" << endl;
    cin >> quantas;
    for (int i=1; i<=quantas; i++){
        cout << "digite a " << i << " idade" << endl;
        cin >> idade;
        total=total+idade;    
    }
    total=total/quantas;
    cout << "total: " << total << endl;
    
    if (total>=60){
        cout << "turma idosa" << endl;
    }else if(total<60 && total>=26){
        cout << "turma adulta" << endl;
    }else{
        cout << "turma jovem" << endl;
    }

    return 0;
}