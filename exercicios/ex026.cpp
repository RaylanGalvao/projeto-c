#include <iostream>

using namespace std;
int fatorial(int n);
int fibonacci (int n);
int main(){
    //fatorial/fibonacci
    int val, res;
    val=3;
    res=fatorial(val);
    cout << "fatorial de " << val << ": " << res << endl;
    cout << "fibonacci com " << val << " valores: " << endl;
    for(int i=0; i<val; i++){
        cout << fibonacci(i+1) << " ";
    }  
    cout << endl ;

    return 0;
}
int fatorial(int n){
    if (n==0){
        return 1;
    }
    return n*fatorial(n-1);
}
int fibonacci(int n){
    if (n==1 || n==2){
        return 1;
    }else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}