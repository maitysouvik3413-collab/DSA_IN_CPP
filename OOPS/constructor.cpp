#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rno;
    float cgpa;
    //construtor overloading
    student(string n,int r,float c){ //parameterised constructor
        name=n;
        rno=r;
        cgpa=c;
    }
    student(int r,float c,string n){ //parameterised constructor
        rno=r;
        cgpa=c;
        name=n;
    }
    student(){ //default constructor
    }
};
    int main(){
        student x("sumit",39,8.7);
        cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;

        student y(1049,9.75,"manish");
        cout<<y.rno<<" "<<y.cgpa<<" "<<y.name<<" "<<endl;
    }

    

