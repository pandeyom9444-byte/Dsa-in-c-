#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;
    Cricketer(string name , int runs , float average){
        this ->name = name;
        this ->runs = runs;
        this ->average = average;
    }
    void print(){
        cout << name << endl;
        cout << runs << endl;
        cout << average << endl;
    }
};
int main(){
    Cricketer c1("Virat kholi",100000,46.7);
    Cricketer c2("Sachin Tendulkar",18000,46.7);
    Cricketer c3("Rohit Sharma",11000,49.4);

    Cricketer* p = new Cricketer("ABD",10000,55.2);
    p ->print();

    Cricketer* ptr = &c1;
    ptr ->average = 74.2;
    cout << c1.average << endl;
    // (*ptr).average = 74.2;
    cout << ptr->name << endl;
    cout << ptr->average << endl;

    int x = 10;
    int* y = new int(10);

    
    // linked list and binary trees ke liye bhoot imp hai and yeh bhoot important hai 
    // int x = 10;
    // int *ptr = &x;
    // cout << *ptr << endl;
    // * is deference Operator
//     *ptr = 20;
//     cout << *ptr << endl;
 }