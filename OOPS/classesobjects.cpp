#include<iostream>
using namespace std;
class student{ //user defined data type
public:
    string name;
    int rno;
    float cgpa;
};
int main(){
    student x; // x is an objective/variables
    x.name="sumit";
    x.rno=39;
    x.cgpa=8.7;
    student y;
    y.name="souvik";
    y.rno=1049;
    y.cgpa=9.8;
    student z;
    z.name="ikram";
    z.rno=42;
    z.cgpa=8.1;

    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;
}