#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x = 8;
    int y = x++ + --x;
    cout << y << endl;
}
