#include<iostream>
using namespace std;
class Cricketer{
private:
    int runs;
public:
    string name;
    float average;
    Cricketer(string name , int runs , float average){
        (*this).name = name;
        this->runs = runs;
        this->average = average;
    }
    int getRuns(){
        return runs;
    }
    void setRuns(int runs){
        this ->runs = runs;
    }
};
int main(){
    Cricketer c("Virat kholi",100000,46.7);
    // cout << c->runs << endl;
    c.setRuns(15000);
    cout << c.getRuns() << endl;

 }