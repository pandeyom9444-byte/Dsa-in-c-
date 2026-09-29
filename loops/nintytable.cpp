#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number ";
    cin >> n;
    for(int i = 1; i<=n; i++){
        cout << i;
        int table = i*n;
        cout << i << "*" <<table << endl;
        
    }
    
}