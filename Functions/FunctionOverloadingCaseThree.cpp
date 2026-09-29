#include<iostream>
using namespace std;
void func(int x, float y){
    cout << "Sahib" << endl;

}
void func(float y, int x){
    cout << "Dhruv" << endl;
}
int main(){
    func(18,3.14);
}