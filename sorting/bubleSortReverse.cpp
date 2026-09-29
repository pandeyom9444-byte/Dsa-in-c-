#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ReverseBubble(vector<int> &arr){
    int n = arr.size();
    int totalSwaps = 0;
    for(int i=0; i<n-1; i++){
        int swaps = 0;
        for(int j=0; j<n-1-i; j++){
            if(arr[i+1] > arr[i])
            swap(arr[i+1],arr[i]);
            swaps++;
            totalSwaps++;
        }
        if(swaps == 0) break;
      
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,10,12};
    ReverseBubble(arr);
    
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}