#include<iostream>
using namespace std;
class complex{
public:
    float real;
    float imaginary;
    complex(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
        cout<<real<<" +i"<<imaginary<<endl;
    }
};
    int main(){
        complex c1(3,7);
        c1.print();
    }
