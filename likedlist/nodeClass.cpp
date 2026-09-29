#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next; // adress ki jagah next hai next kyu hai kyuki next aadami ka adress hai
    Node(int val){
        this->val = val;
    }
};

int main(){
    Node a(7);// head
    Node b(0);
    Node c(1);
    Node d(8);
    Node e(2);

    // attaching nodes
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    cout <<(*(a.next)).val << endl;
    cout << (*(b.next)).val << endl;
    cout << a.next << endl;
    cout << (&b) << endl;

    int x = 10;
    int* ptr = &x;
    cout << (*(a.next)).val << endl;
    
}