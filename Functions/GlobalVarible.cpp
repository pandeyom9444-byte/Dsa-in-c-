#include<iostream>
using namespace std;
int x = 7; // global variableeeeeeee
void func(){
    x = 23;
}
int main(){
    cout << x << endl;
    func();
    cout << x << endl;
}