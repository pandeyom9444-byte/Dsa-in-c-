#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int SearchRotated(vector<int> &arr,int target){
    int n = arr.size();
    int lo = 0 , hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == target) return arr[mid];
        if(arr[lo] <= arr[mid]){ // left half is sorted 
            if(arr[lo] <= target && target <= arr[mid]) hi = mid - 1;
            else lo = mid + 1;
        }
        else { // right half is sorted
            if(arr[lo] <= target && target <= arr[hi]) lo = mid-1;
            else hi = mid - 1;
        }
    }
}
int main(){
    vector<int> arr = {8,9,10,1,2,3,4,5,6,7};
    int target = 9;
    cout << SearchRotated(arr,target) << " ";

}