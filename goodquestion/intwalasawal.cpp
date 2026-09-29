#include<iostream>
using namespace std;
int main(){
    float x;
    cout << "Enter anything";
    cin >> x;

    int y = (int)x;
    cout << y;

    if( x==y) cout << " number is integer";
    else cout << "not a integer";

}