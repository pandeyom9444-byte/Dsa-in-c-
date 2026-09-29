#include<iostream>
using namespace std;
int main(){
    int arr[][4] = {{5,80,1,2},{9,8,7,6},{7,0,3,5}};
    int MaxRow= -1,MaxSum = INT16_MIN;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum+=arr[i][j];

        }
        if(sum > MaxSum) {
            MaxSum = sum;
            MaxRow = i;
        }
    }
    cout << MaxRow << " " << MaxSum;
}