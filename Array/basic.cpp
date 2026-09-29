#include<iostream>
#include<vector>
#include<cmath>
#include<iterator>
using namespace std;
int main(){
    float arr[]={3.1415,2.81,9.8};
    // cout << std::size(arr) << endl;// giving error old c++ version
    cout << sizeof(arr) << endl;
    cout << arr[2] << endl;
}
