#include<iostream>
using namespace std;
class cricketer{
private:
    string name;
    int runs;
    float average;
public:
    cricketer(string name,int runs,float average){
        this->name=name;
        this->runs=runs;
        this->average=average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
    }
    int getruns(){
        return runs;
    }
};

int main(){
    cricketer c("virat kohli",10000,55);
    cout<<c.getruns()<<endl; //individually number de diya by using c.getruns()
    
}
