// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'a';
//     cout << (int)ch << " ";
// }
// sabse phle a ko kisi ke aandar daalo and then jiske aandar daala hai uska type cast krdo 

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=97; i<122; i++){
//         cout << (char)i << " " << i << endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number";
    cin >> n;
   for(int i=1; i<n/2; i++){
    cout << i << endl;
    
    cout << n-i+1 << endl;
   }
   if(n%2!=0)
   cout << (n/2+1);
}