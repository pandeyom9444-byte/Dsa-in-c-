#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next; // adress ki jagah next hai next kyu hai kyuki next aadami ka adress hai
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->next << " ";
        temp = temp->next;
    }
}

int main(){
    Node* a = new Node(7);// head
    // cout << a->val << endl;
    Node* b = new Node(0);
    Node* c = new Node(1);
    Node* d = new Node(8);
    Node* e = new Node(2);

     // attaching nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    print(a);

    cout << a->val << endl;
    cout << a->next->val << endl;
    cout << a->next->next->val << endl;
    // likedlist is like one sided love
}