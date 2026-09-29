#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int sum =0;
    int arr[n];
    cout << "Enter Array Element :";
    for(int i=0; i<=n-1; i++){
        cin >>arr[i];
    }

    for(int i=0; i<=n-1; i++){
        sum+=arr[i];
    }
    cout << "Sum of array is : " << sum << endl;
}