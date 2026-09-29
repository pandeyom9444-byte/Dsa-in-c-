#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number";
    cin >> n;
    int rev = 0;
    int sum = 0;
    
    while(n!=0){
       rev *=10;
       int lastNumber = n%10;
       rev = rev+lastNumber;
       sum = sum + lastNumber;
       n=n/10;

    }
    cout << "Reverse of the NUmber is : " << rev << endl;
    cout << "sum of the number is : " << sum << endl;

}