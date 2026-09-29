#include<iostream>
using namespace std;
class Car{ // User defined Datatype
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print(){
    cout << name << " "<< power << " " <<mileage << " " << isE20Compatible << endl;
}
};



int main(){
    Car c1;
    c1.name = "kia sonnet";
    c1.power = 118;
    c1.mileage = 5;
    c1.isE20Compatible = true;

    Car c2 = {"Toyota Fortuner",200,7.6,false};
    // cout << c1.name << " "<< c1.power << " " <<c1.mileage << " " << c1.isE20Compatible;
    // cout << c2.power << endl;
    c1.print();
}