// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "Bhavya";
//     string sub = s.substr(1,4); // 0 to 2 la kr dega 
//     cout << sub << endl;
    
// }

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcd";
    int  n = s.length();
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){ // j = 1 se lekr n-i tk jayega 
            cout << s.substr(i,j) << " ";
        }
        cout << endl;
    }
}