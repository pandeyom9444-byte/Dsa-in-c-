#include<iostream>
using namespace std;
class Student{ // User defined Datatype
public:
    string name;
    int rno;
    float cgpa;
    // Constructor Overloading 
    Student(){ // default constructor
    }
        Student(string n , int r,float c){// parameterised constructor
        name = n;
        rno = r;
        cgpa = c;
    }

     Student(float c , int r,string n){// parameterised constructor
        name = n;
        rno = r;
        cgpa = c;
    }

     Student(string n , int r){// parameterised constructor
        name = n;
        rno = r;
        
    }

};

int main(){
   Student x; // x is an objects 
   x.name = "Om Pandey";
   x.rno = 119;
   x.cgpa = 9.1;

   Student y(1049,9.75,"Manish"); 
   
   Student z("Ikram",42); 
  

   cout << x.name << " " << x.rno << " " << x.cgpa << endl;
   cout << y.name << " " << y.rno << " " << y.cgpa << endl;
   cout << z.name << " " << z.rno << " " << z.cgpa << endl;
}