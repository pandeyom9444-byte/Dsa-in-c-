#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // jumping two pointer technique varible size sliding window 
    string s = "Arjun is intelligent boy";
    int n = s.length();
    int i = 0, j = 0,maxlen = 0;
    while(j < n){
        if(s[j] != ' ');
        else{
            int len = j-i;
            if(len > maxlen) maxlen = len;
            // jump to next word's Starting
            i = j;
            while( i<n && s[i] == ' '){
                i++;
                j++;
            }
        }
    }
    cout <<maxlen <<" ";
}