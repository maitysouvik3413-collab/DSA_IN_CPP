
#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class MyLinkedList {
public:
    node* head;
    node* tail;
    int length;

    MyLinkedList() {
        head = tail = NULL;
        length = 0;
    }

    void display() {
        node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtTail(int val) {
        node* n = new node(val);

        if(length == 0) {
            head = tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
        length++;
    }

    void insertAtHead(int val) {
        node* n = new node(val);

        if(length == 0) {
            head = tail = n;
        }
        else {
            n->next = head;
            head = n;
        }
        length++;
    }
};

int main() {
    MyLinkedList list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);

    list.insertAtHead(40);

    list.display();

    return 0;
}







     
