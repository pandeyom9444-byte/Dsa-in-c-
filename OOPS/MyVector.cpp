#include<iostream>
#include<vector>
using namespace std;
class MyVector{ // user define datastructure
public:
    int length;
    int* arr;
    int cap;
    MyVector(int capacity,int default_Value){
        length = cap = capacity;
        arr = new int[capacity];
        for(int i=0; i<capacity; i++){
            arr[i] = default_Value;
        }
    }
    int size(){
        return length;
    }
    void pop_back(){
        length--;
    }

    void push_back(int val){
        if(length == cap){
            // double the capacity & copy paste
             cap = 2*cap;
            int temp[2*cap];
            for(int i=0; i<length; i++){
                temp[i] = arr[i];
            }
            delete arr;
            arr = temp;
        }
        arr[length++] = val;
        
    }

    void print(){
        for(int i=0; i<length;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    MyVector v(5,-1); // {-1,-1,-1,-1,-1}

    v.print();
    v.pop_back();
    v.print();
    v.push_back(10);
    v.print();

    // int* arr = new int[5];
    // arr[0] = 10; arr[1] = 20;

    // int b[] = {67,21,8,2};
    // int* arr = b;

    // cout << arr[0] << endl;
 }