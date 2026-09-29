#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse( vector<int>& v,int i,int j){
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int k;
    cin >> k;
    int i=1, j=v.size()-1;
    int n = v.size();
    k%=n;
    reverse(v,0,n-1);
    reverse(v,0,k-1);
    reverse(v,k,n-1);



}