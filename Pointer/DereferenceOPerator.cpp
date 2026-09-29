#include<iostream>
using namespace std;
int main(){
    int x = 139;
    int* p = &x;

   cout << "Orignal VAlue : " << x << endl;
   cout << "Value of P : "<< p << endl;
   cout << &x << endl;
   *p=10;
   cout << "change value of x :" << x ; 


}