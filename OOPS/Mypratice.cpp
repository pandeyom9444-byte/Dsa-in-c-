#include<iostream>
#include<vector>
using namespace std;
    class MyVector{
public:
        int length;
        int *arr;
        int cap;

        MyVector(int capacity,int default_value){
            length = cap = capacity;
            arr = new int[capacity];
            for(int i=0; i<capacity; i++){
                arr[i] = default_value;
            }
        }
        int size(){
            return length;
        }
        void pop_back(){
            if(length == 0){
                cout << "Vector is empty!" << endl;
                return ;
            }
            length --;
        }
        void push_back(int val){
            if(length = cap){
                cap = 2*cap;
                int* temp = new int[2*cap];
                for(int i=0; i<length; i++){
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
            }
            arr[length++] = val;
        }
        int get(int idx){
            return arr[idx];
        }
        void print(){
                for(int i=0; i<length; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
        }
};
int main(){
    MyVector v(5,-1);
    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.print();
    v.push_back(20);
    v.print();

    cout << v.get(5) << endl;
}