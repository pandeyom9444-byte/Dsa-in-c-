#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Element :";
    for(int i=0; i<=n-1; i++){
        cin >>arr[i];
    }

    //printing
    for(int i=0; i<=n-1; i++){
        if(arr[i] < 0){
            cout << arr[i] << " " << endl;
        }
    } 
}