#include<iostream>
using namespace std;
int main(){
    int x=10;
    int*ptr=&x;
    cout<<*ptr<<endl;
}

// x value when change
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int*ptr=&x;
    *ptr=20;
    cout<<x<<endl; // x ak vlue bhi change ho jayega

}