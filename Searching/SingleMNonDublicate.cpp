#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int singleDublicate(const vector<int>& arr) {
     int n = arr.size();
    if(n==1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    int lo = 1 , hi = n-2;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] != arr[mid]-1 && arr[mid] != arr[mid]+1) return mid;
        int f = mid , s = mid;
        if(arr[mid] == arr[mid]-1) f = mid -1;
        else s = mid + 1;
        int leftLength = f-lo;
        if(leftLength %2 == 1) hi = f-1; // f-l is left side length
        else lo = s+1;


    }
    return 8885;

}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout << singleDublicate(arr);
}