#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,12,55,6,77};
    int target = 77;
    for(int i=0; i<5; i++){
       if(arr[i]==target){
        cout << target << endl;
        cout << "target found at : " << i << endl;
       }
       
    }
}