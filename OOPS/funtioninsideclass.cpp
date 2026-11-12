#include<iostream>
using namespace std;
class car{
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
};
void print(car c){
    cout<<c.name<<" "<<c.power<<" "<<c.mileage<<" "<<c.isE20Compatible<<" "<<endl;

}
int main(){
    car c1;
    c1.isE20Compatible=true;
    c1.name="kia sonet";
    c1.power=118;
    c1.mileage=9.2;

    car c2={"toyota fortunate",200,7.6,false};
    print(c1);
    print(c2);

}

//method 2


#include<iostream>
using namespace std;
class car{ //user defined data type
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print(){
         cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20Compatible<<" "<<endl; //iske ander bhi kar shkate ho
    }
};
int main(){
    car c1;
    c1.isE20Compatible=true;
    c1.name="kia sonet";
    c1.power=118;
    c1.mileage=9.2;

    car c2={"toyota fortunate",200,7.6,false};

    c1.print ();
    c2.print();
}



