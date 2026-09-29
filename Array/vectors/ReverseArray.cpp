#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr) cout << ele << " ";
    cout << endl;
}
int main(){
    vector<int> arr = {10,20,30,40,50,60};
    int i=1, j=3;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    print(arr);
}