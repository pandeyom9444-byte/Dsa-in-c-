#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    string s = to_string(abs(n));
    cout << s.length() << endl;
}