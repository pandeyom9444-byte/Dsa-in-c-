#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Enter ROws and Column ";
    cin >> r >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==3 || j==3) cout << "*" ;
            else cout << " ";
        }
        cout << endl;
    }
}