// #include<iostream>
// using namespace std;
// void param(){
//     cout << "Param" << " ";
// }
// int main(){
//     param();
// }

// #include<iostream>
// using namespace std;
// void deeKsha(int n){
//     if(n==0) return;
//     cout << "deeksha" << endl;
//     deeKsha(n-1);
// }
// int main(){
//     deeKsha(3);
// } 


#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case
    cout << n << " ";// work
    print(n-1);// callsss
}
int main(){
    int n;
    cin >> n;
    print(n);
} 