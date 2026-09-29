#include<iostream>
using namespace std;
void func(){
    cout << "Hi" << endl;
}
void func(int x = 7){
    cout << "Good Morning" << endl;
}
void func(int x, int y){
    cout << "Kaise Ho Sushant" << endl;
}
int main(){
    func(5,7);
}