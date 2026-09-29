// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cout << "ENter a Number :";
//     cin >> n;
//     int count =0;
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             count++;
//             break;

//         }
//     }
//     if(count==1) cout << "Either Prime Nor Composite" << endl;
//     else if(count>=3) cout<<"composite number" << endl;
//     else cout << "prime number" << endl;;

//     cout <<"number of factor is :"<< count;
// }
    



#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "ENter a Number :";
    cin >> n;
    bool flag = false;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
           flag = true;
           break;
        }
    
    }
    if(n==1) cout<< "Either prime Nor Composite";
    else if(flag==true) cout << "Composite Number";
    else cout << "Prime Number";


}
   