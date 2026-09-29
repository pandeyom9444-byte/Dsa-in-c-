#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "function swap wala hai :" << *a  <<" "<< *b << endl;
}
int main(){
    int a = 5 , b = 2;
    swap(&a,&b);
    cout << a << " " << b << endl;
}