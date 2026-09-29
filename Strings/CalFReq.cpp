#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
char  getMaxOccuringChar(string &s){
    int n = s.length();
    vector<int> freq(26,0);
    for(char ch : s){
        int idx = ch - 97;
        freq[idx]++;
    }
    int maxFreq = 0;
    for(int i=0; i<26; i++){
       maxFreq = max(freq[i],maxFreq);
    }
    for(int i=0; i<26; i++){
        if(freq[i] == maxFreq)
        cout << (char)(i + 97);
    }
    return s[0];
}

int main(){
    string s = "yyymmaavb";
    char maxFreq = getMaxOccuringChar(s);
    cout << maxFreq << " ";
    
}