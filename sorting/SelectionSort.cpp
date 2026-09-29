#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout << ele << " ";
    }
}
int main (){
     vector<int> arr = {5,4,1,8,9,7,5};
        int n = arr.size();
    // selection sort laagna hai 
    for(int j=0; j<n-1; j++){
   
        int mn = arr[j],minIdx = j;
        for(int i=j; i<n; i++){
            if(arr[i] < mn){
                mn = arr[i];
                minIdx = i;
            }
            // 
            
        }
         swap(arr[j],arr[minIdx]);
    }
    print(arr);
    
   
}


    // for(int j=0; j<n-1; j++){
    //     int mn = arr[j], minIdx = j;
    //     for(int i=j; i<n; i++){
    //         if(arr[i] < mn ){
    //             mn = arr[i];
    //             minIdx =  i;
    //         }
    //         swap(arr[j], arr[minIdx]);
    //     }
    //     print(arr);
    // }