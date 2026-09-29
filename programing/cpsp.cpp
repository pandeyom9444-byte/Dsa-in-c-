#include<iostream>
using namespace std;
int main(){
    float cp;
    cout << "Enter cost price" ;
    cin >> cp;
    float sp; 
    cout << "Enter Selling Price";
    cin >> sp;

    if(cp>sp){
        cout << "no profit" << endl;
        int loss = cp-sp;
        cout << loss << endl; ;
    }
    else {
        cout << "profit" << endl;
        int profit = sp - cp;
        cout << "amout of profit is "<< profit << endl;
        
    }
}



