// #include<iostream>
// using namespace std;
// void change(int x){
//     x = 20;
//     cout << "This is Function Wala x :" << x << endl;
// }
// int main(){
//     int x = 10;
   
//     change(x);
//     cout << "This is main wala x :"<< x << endl;

// }


#include<iostream>
using namespace std;
void change(int* p){
    *p = 20;
    cout << "Function wala x : " << *p << endl;
}
int main(){
    int x = 7;
    int* p = &x;
    change(p);
    cout << "this is main wala x :" << x << endl;
}