#include <iostream>
using namespace std;
int main(){
    int a = 2,b = 3, c = 1, d = 4, e = 2;

    a+=4;
    b=c+a++;
    c=--d*e--;

    int result = a+b*c-d+e;

    cout << result << " " << a << " " << b << " " << c <<" " << d << " " << e;
}