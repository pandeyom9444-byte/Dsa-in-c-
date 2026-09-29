#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    for(int i=0; i<v.size(); i++){// ismai ap aapnai hissab se sari chize kr sakte hai
        if(v[i]%2==0) cout << v[i]*2;
        else v[i]*=v[i]; 
        // cout << v[i] << " ";
    }
    
//     for(int ele : v){ // for int element in vector likhnai ka mtlb hai is sentence ka 
//         cout << ele << " ";
//     }
// }
}