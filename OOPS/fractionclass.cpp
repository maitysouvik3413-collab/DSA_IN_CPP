#include<iostream>
using namespace std;
class fraction{
public:
    int num;
    int den;
    fraction(int num,int den){
        this->den=den;
        this->num=num;
    }
    fraction(){
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
};
fraction multiply(fraction f1,fraction f2){
    fraction res;
    res.num=f1.num*f2.num;
    res.den=f1.den*f2.den;
    return res;
}

int main(){
    fraction f1(2,5);
    fraction f2(3,5);
    fraction ans=multiply(f1,f2);
    f1.print();
    f2.print();
    ans.print();
}



