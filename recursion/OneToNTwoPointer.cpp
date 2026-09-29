#include<iostream>
using namespace std;
void print(int x , int n){
    if(x>n) return ;
    cout << x << " ";
    print(x+1,n); 
}
// void print(int x){
//     if(x>n) return;
//     cout << x << " ";
//     print(x+1);
// }
int main(){
    int n;
    cin >> n;
    print(1,n);// x ko hmnai 1 mana hai so aagr 1 bada hogya n se iska mtlb wohi chiz return krdo
}

#include<iostream>
using namespace std;
