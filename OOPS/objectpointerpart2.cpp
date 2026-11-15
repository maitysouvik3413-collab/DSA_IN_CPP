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
};
int main(){
    cricketer c1("virat kohli",10000,55.7);
    cricketer c2("sachin tendulkar",18000,48.7);
    cricketer c3("rohit sharma",6000,35.5);

    // cricketer*ptr=&c1; //so called object pointer
    // cout<<(*ptr).average<<endl;
    // cout<<(*ptr).runs<<endl;
    // cout<<(*ptr).name<<endl;


    cricketer*ptr=&c1;
    // (*ptr).average=74.2;//is tarha change kar shakte ho
    ptr->average=74.2; //(*ptr) ko is traha bhi likh shakte ho
    cout<<c1.average<<endl;
    cout<<ptr->name<<endl;
    cout<<ptr->runs<<endl;
    
}




