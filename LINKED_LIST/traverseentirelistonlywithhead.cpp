
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
void print(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    
    print(a);
     
    cout<<a->val<<endl;
    cout<<a->next->val<<endl;
    cout<<a->next->next->val<<endl;
    cout<<a->next->next->next->val<<endl;
    cout<<a->next->next->next->next->val<<endl; // all values are printed by using a
}

