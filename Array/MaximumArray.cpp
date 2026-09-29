#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,12,55,6,77};
    int max = INT16_MIN;
    for(int i=0; i<=5; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
        
    }
    cout << max;
}