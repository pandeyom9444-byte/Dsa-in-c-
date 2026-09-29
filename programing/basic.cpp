#include<iostream>
using namespace std;
int main(){

    cout << 2%7 << endl; // 
    cout << 10%(-3) << endl;;
    cout << (-10)%3;
    return 0;
}

// character datatype ---------------------------------------------------------
// A = 65 ,, a = 97,, 0 = 48 ASCII VALUES LEARN THEM 



#include<iostream>
using namespace std;
int main(){
    char x = 'H';
    cout << x <<endl;  // A = 65 ,, a = 97,, 0 = 48
    return 0;
}
  
// typecasting imp hai thoda 

#include<iostream>
 using namespace std;
 int main(){
     char x = '4';
     int ascii = int(x);
     cout << ascii;
     return 0;
}

// program by doing typecasting ---------------------------
#include<iostream>
using namespace std;
int main(){
    int x = 72;
    cout << (char)x ;

    return 0;
}


// program by doing type casting by adding number -------------

#include<iostream>
using namespace std;
int main(){
    char ch1 = 'A';
    char ch2 = 'a';
    cout << ch1 + ch2 << endl;

    
    return 0;

}

