#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Souvik Maity";
    cout<<s.size()<<endl; //as like vector.
    cout<<s[1]<<endl;
    s[0] = 'A';  // FOR SINGLE CHARACTER USE SINGLE INVITED COMMA.
    cout<<s<<endl;
}
