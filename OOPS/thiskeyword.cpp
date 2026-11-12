#include<iostream>
using namespace std;
class pokemon{
public:
    string name;
    string type;
    int hp;
    pokemon(string name,string type,int hp){
        // name=n;
        // type=t;
        // hp =h;

        this->name=name;
        this->type=type;
        this->hp=hp;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<" "<<endl;
    }
};
int main(){
    pokemon p1("pikachu","electric",70);
    pokemon p2("charizard","fire",120);
    pokemon p3("mewtwo","psychic",200);
    p3.print();
}
