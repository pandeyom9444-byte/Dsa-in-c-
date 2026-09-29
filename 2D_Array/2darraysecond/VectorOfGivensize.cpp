#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m ,n;
    cout << "Enters ROws :";
    cin >> m;
    cout << "Enter Cols :";
    cin >> n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    arr.push_back(vector<int>(4,-1));
    // out put 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}