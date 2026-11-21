#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        
    }
};
int main(){
    node a(7);
    node b(0);
    node c(1);
    node d(8);
    node e(2);
// attaching the nodes
a.next=&b;
b.next=&c;
c.next=&d;
d.next=&e;

cout<<a.next<<endl;
cout<<&b<<endl;
 // same output diya kuki a.next matlab hi hota hai ba ka address.
 cout<<(*(a.next)).val<<endl; // is tarha value print kar shakte hai by using dereferance operator
 
}



