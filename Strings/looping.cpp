// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int main(){
//     string s = "Om Pandey";
//     int n = s.size();
//     for(int i=0; i<n; i++){
//         cout << s[i] ; // srif i print krwauga toh 0123456 aajayega s[i] krwauga toh Om pandey aayega
//     }
// }


// concatenation 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1 = "111";
    string s2 = "222";
    string s3 = s1 + s2;
    cout << s3 << endl;

    string s = "abc";
    string x = s + '4';
    cout << x << endl;

    string s4 = "Om";
    s4 += "Pandey";
    cout << s4 << endl;
    
    sort(s.begin(),s.end());
}

