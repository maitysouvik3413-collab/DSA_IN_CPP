
#include<iostream>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class MyLinkedList{
public:
    node* head;
    node* tail;
    int length;

    MyLinkedList(){
        head = tail = NULL;
        length = 0;
    }

    void display(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtHead(int val){
        node* n = new node(val);
        if(length == 0) head = tail = n;
        else{
            n->next = head;
            head = n;
        }
        length++;
    }

    void removeAtHead(){
        if(length == 0) return;
        head = head->next;
        length--;
    }
};

int main(){
    MyLinkedList list;

    list.insertAtHead(30);
    list.insertAtHead(20);
    list.insertAtHead(10);

    list.display();

    list.removeAtHead();

    list.display();

    return 0;
}
