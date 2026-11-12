#include<iostream>
using namespace std;
class student{
public:
        string name;
        int rno;
        float cgpa;
        student(string n,float c,int r){
            rno=r;
            name=n;
            cgpa=c;
        }
        void print(){
            cout<<name<<" "<<rno<<" "<<cgpa<<" "<<endl;
        }
    };
    void change(student &s){
        s.name ="akash";
    }
    int main(){
        student x("sumit",8.7,39);
        change(x);
        x.print();
    }
        




