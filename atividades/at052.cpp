#include <iostream>

using namespace std;

int main(){
  int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if(a>b && a>c && a>d && a>e){
        cout << a << endl;
    }else if (b>a && b>c && b>d && b>e){
        cout << b << endl;
    }else if(c>a && c>b && c>d && c>e){
        cout << c << endl;
  }else if (d>a && d>b && d>c && d>e){
        cout << d << endl;
  }else {
        cout << e << endl;
  }
    return 0;
}