#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
//    char arr[] = {'O','M','P','A','N','D','E','Y'};
//    for(int ele : arr){
//     cout << char(ele) << " ";
//    }

// aise string ko le skte hai hm 
string x = "Om Pandey";
cout << x << endl; 

// string ka input kaise late hai

string s;
cin >> s;
// cout << s; // ismai srif first word ayega uske baad nahi aayega 

getline(cin , s);
cout << s;

}