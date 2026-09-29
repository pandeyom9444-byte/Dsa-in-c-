#include<iostream>
#include<climits>
using namespace std;
void change(int* p){
    *p = 5;
    cout << *p << endl;

}
int main(){
    // int x = 5;
    // int* p = &x;
    // cout << *p << endl;
    // cout << p << endl;
    // cout << &x << endl;

    int x = 8;
    int *p = &x;
    change(p);
    cout << *p << endl;
    return 0;

}