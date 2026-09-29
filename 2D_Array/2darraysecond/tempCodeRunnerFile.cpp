// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][4] = {{5,80,1,2},{9,8,7,6},{7,0,3,5}};
//     int MaxRow= -1,MinSum = INT16_MAX;
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<4; j++){
//             sum += arr[i][j];
//         }
//         if(sum < MinSum){
//             MinSum = sum;
//             MaxRow = i;
//         }
//     }
//     cout << MaxRow << " " << MinSum;

// }





#include<iostream>
using namespace std;
int main (){
     int arr[][4] = {{5,80,1,2},{9,8,7,6},{7,0,3,5}};
     int maxROw = -1,minSum = INT8_MAX;
     for(int i=0; i<3; i++){
        int sum = 0;
        int maxElement = 0;
        for(int j=0; j<4; j++){
            maxElement = i;
            sum += arr[i][j];
        }
        if(sum < minSum){ // aagr min sum bada hoga sum se us row ki then sum ki value hai wo min sum ke pass chli jayegi 
            minSum = sum;
            maxROw = i;

        }
     }
     cout << maxROw << " " << minSum;
}