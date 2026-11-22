
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
private:
    node* head;
    node* tail;
    int length;

public:
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

    void insertAtTail(int val){
        node* n = new node(val);
        if(length == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        length++;
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

    void insert(int idx, int val){
        if(idx < 0 or idx > length){
            cout << "invalid index!" << endl;
            return;
        }

        if(idx == 0){
            insertAtHead(val);
            return;
        }

        if(idx == length){
            insertAtTail(val);
            return;
        }

        node* n = new node(val);
        node* temp = head;

        for(int i = 1; i <= idx-1; i++){
            temp = temp->next;
        }

        n->next = temp->next;
        temp->next = n;
        length++;
    }

    void removeAtHead(){
        if(length == 0) return;

        node* temp = head;
        head = head->next;
        delete temp;
        length--;

        if(length == 0) tail = NULL;
    }

    void remove(int idx){
        if(idx < 0 or idx >= length){
            cout << "invalid index!" << endl;
            return;
        }

        if(idx == 0){
            removeAtHead();
            return;
        }

        node* temp = head;
        for(int i = 1; i <= idx-1; i++){
            temp = temp->next;
        }

        node* del = temp->next;
        temp->next = temp->next->next;

        if(del == tail){
            tail = temp;
        }

        delete del;
        length--;
    }

    int get(int idx){
        if(idx < 0 or idx >= length){
            return -1;
        }

        node* temp = head;
        for(int i = 0; i < idx; i++){
            temp = temp->next;
        }

        return temp->val;
    }
};

int main(){
    MyLinkedList List;

    List.insertAtTail(10);
    List.insertAtTail(20);
    List.insertAtTail(30);
    List.display();

    List.insertAtHead(5);
    List.display();

    List.insert(2, 15);
    List.display();

    cout << List.get(2) << endl;

    List.remove(0);
    List.display();

    List.remove(2);
    List.display();

    return 0;
}

