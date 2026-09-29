#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void segregate0and1(vector<int> &arr) {
   int countZero =0;

   for(int x : arr){
    if(x==0);
    countZero++;
   }

   for(int i=0; i<arr.size(); i++){
    if(i<countZero)
    arr[i]=0;
    else arr[i] = 1;
   }
   

}
int main(){
    vector<int> arr = {1,0,1,0,1,1,0,0,1};
    segregate0and1(arr);

    for(int x : arr){
        cout << x << " ";
    }

    cout << endl;
}