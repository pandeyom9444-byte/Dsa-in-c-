#include<iostream>
using namespace std;
class Cricketer{
    private:
    int runs;
    public:
    string name;
    float average;

    Cricketer(string name , int runs , float average){
        this -> name = name;
        this -> runs = runs;
        this -> average = average;
    }
    void print(){
        cout << name << endl;
        cout << runs << endl;
        cout << average << endl;

    }
    int getRuns(){
        return runs;
    }
    void setRuns(int runs){
        this ->runs;
    }
};
int main(){
    Cricketer c("virat kholi",9230,67.4);
    
    // Cricketer*p = new Cricketer("ABD",10000,55.5);
    // Cricketer* ptr = &c1;

    // (*ptr).average = 74.2;
    // ptr->average = 74.2;
    // cout << ptr->name << endl;
    cout << c.getRuns() << endl;
    c.setRuns(15000);
    cout << c.average << endl;

    int x = 10;
    int* y = new int(10);

}