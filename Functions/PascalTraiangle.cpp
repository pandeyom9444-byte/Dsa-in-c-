#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
}
int ncr(int n , int r){
    return fact(n) / fact(r)*fact(n-r);
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            cout << " ";
        }
        cout << endl;
         for(int j=0; j<=i; j++){
            cout << ncr(i,j) << " ";
         }
    }

}