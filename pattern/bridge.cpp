#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number ";
    cin >> n;
    int nsp =1, nst=(2*n)-1;
    for(int i=1; i<nst; i++){
        cout << "*";
    }
    n--;
    cout << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << "*";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << " ";
        }
        for(int j=1; j<=n+1-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
    
    
