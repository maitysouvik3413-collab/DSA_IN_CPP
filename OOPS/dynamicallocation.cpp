#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    float average;
    cricketer(string name,int runs,float average){
        this->name=name;
        this->runs=runs;
        this->average=average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
};

int main(){
    cricketer c1("virat kohli",10000,55.7);
    cricketer c2("sachin tendulkar",18000,48.7);
    cricketer c3("rohit sharma",6000,35.5);
    c1.print();

    cricketer*p=new cricketer("ABD",22000,65.4); //new object pointer
    p->print();
    // cricketer*ptr=&c1;
    // cout<<ptr->average<<endl;
    // cout<<ptr->name<<endl;
    // cout<<ptr->runs<<endl;

}


