#include<iostream>
using namespace std;
class car{
public:
    string name;
    string colour;
    int power;
    float mileage;
    bool isE20Compatible;
    int seats;
    int price;
};
int main(){
    car c1;
    c1.name="kia sonet";
    c1.power=118;
    c1.mileage=9.2;
    c1.isE20Compatible = true;

    car c2={"Toyota Fortuner","white",200,7.6,false};
    cout<<c2.power<<endl;
}



