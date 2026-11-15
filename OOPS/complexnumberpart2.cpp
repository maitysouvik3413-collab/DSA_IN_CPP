// #include<iostream>
// using namespace std;
// class complex{
// public:
//     float real;
//     float imaginary;
//     complex(int real,int imaginary){
//         this->real=real;
//         this->imaginary=imaginary;
//     }
//     void print(){
//         cout<<real<<" +i"<<imaginary<<endl;
//     }
//     void add(complex c){
//         real=real+c.real;
//         imaginary=imaginary+c.imaginary;
//     }
// };
//     int main(){
//         complex c1(3,7);  // 3+7i
//         complex c2(2,4);  //2+4i
//         c1.print();
//         c1.add(c2);
//         c1.print();
//     }

// now multiplication

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
    void multiply(complex c){
        real=real*c.real - imaginary*c.imaginary;

        imaginary=real*c.imaginary+imaginary*c.real;
    }
};
    int main(){
        complex c1(3,7);  // 3+7i
        complex c2(2,4);  //2+4i
        c1.print();
        c1.multiply(c2);
        c1.print();
    }
        
        