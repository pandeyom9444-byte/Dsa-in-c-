#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
      cout << ele << " ";
    }
}
int main(){
    vector<int> arr = {9,2,0,-1,0,-4,0,0,-8};
    int n = arr.size();
    print(arr);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr);
}