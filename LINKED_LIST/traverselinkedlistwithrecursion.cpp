
#include<iostream>
using namespace std;
class node{
public:
        int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
        
    }
};
void printRec(node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    printRec(head->next);
}


int main(){
    node*a=new node(7);
    node*b=new node(0);
    node*c=new node(1);
    node*d=new node(8);
    node*e=new node(2);
    //attaching nodes
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    
    printRec(a);
    cout<<endl;
}




     

