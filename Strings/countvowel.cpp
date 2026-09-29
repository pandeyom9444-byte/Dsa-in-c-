// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     int n = s.length();
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         if(s[i] == 'a','e','i','o','u') count++;
         
//     }
//     cout << count++ << " ";
    
// }



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for(int i=0; i<n; i++){
        char ch = s[i];
        if(ch >= 65 and ch <= 90) ch+=32;
        if(ch == 'a') count++;
        else if(ch == 'a') count++;
        else if(ch == 'e') count++;
        else if(ch == 'i') count++;
        else if(ch == 'o') count++;
        else if(ch == 'u') count++;
    }
    cout << count << endl;
}