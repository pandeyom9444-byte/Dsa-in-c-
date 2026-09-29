// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int* ptr = &a;
//     cout << &a << endl;
//     cout << ptr << endl;
//     cout << &ptr << endl;
// }


#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    *ptr += 8;
    cout << x << endl;
}