#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s = "926";
    int n = s.length();
    // int sumString = 0;
    for(int i=0; i<n; i++){
        int sumString = 0;
        for(int j=1; j<=n-i; j++){
            sumString = sumString + s[j];
            // cout << s.substr(i,j) << " ";
        }
        cout << endl;
    }
}