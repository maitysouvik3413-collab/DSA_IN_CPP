#include<iostream>
using namespace std;
void aryan(){
    cout<<"aryan"<<endl;
}
void param(){
    cout<<"param"<<endl;
    aryan();
}
void kartik(){
    cout<<"kartik"<<endl;
    param();
}


int main(){
    kartik();
    param();
    aryan();
}

