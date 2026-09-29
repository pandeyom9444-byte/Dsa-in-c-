#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;   // 1st correction
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int length;

    MyLinkedList() {
        head = tail = NULL;
        length = 0;
    }

    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->val << " ";   // 2nd correction
            temp = temp->next;
        }

        cout << endl;
    }

    void insertAtTail(int val) {
        Node* n = new Node(val);

        if(length == 0) {
            head = tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }

        length++;
    }
};

int main() {
    MyLinkedList list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);

    list.display();
}