#include<iostream>
using namespace  std;
class Fraction{
public:
    int num;
    int den;
    Fraction(int num, int den){
        this ->den = den;
        this ->num = num;
    }
    Fraction(){

    }
    void print(){
        cout << num << "/" << den << endl;
    }
    void multiply(Fraction f){
    num = num * f.num;
    den = den * f.den;
}

};

// Fraction multiply(Fraction f1 , Fraction f2){
//     Fraction res;
//     res.num = f1.num * f2.num;
//     res.den = f1.den * f2.den; 
// }

int main(){
    Fraction f1(2, 4);
    Fraction f2(3, 5);
    f1.print();
}