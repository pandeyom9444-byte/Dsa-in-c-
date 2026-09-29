#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bubbleSOrt(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int swaps = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
        if(swaps == 0) break;
    }
}
int main(){
    vector<int> arr = {1,5,8,3,2,6,9};
     bubbleSOrt(arr);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
      
    } 

   
    return 0;
}