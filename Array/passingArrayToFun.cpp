#include<iostream>
using namespace std;
void change(int x[]){
    x[0]=20;
}
int main(){
    int x[]= {1,4,7,8,5};
    change(x);
    cout << x[0] << endl;
}