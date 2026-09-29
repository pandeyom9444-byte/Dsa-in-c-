#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i] % 2 == 0){
            s[i] = 'a';
        }
    }
    cout << s << " ";
}