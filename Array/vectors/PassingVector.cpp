#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>& v){ // vector is pass by value and array is passed by reference 
    // after using & we can used passed by reference
    v[2] = 99;
}
int main(){
    vector<int> v = {4,3,8,2};
    change(v);
    cout << v[2] << endl;
}