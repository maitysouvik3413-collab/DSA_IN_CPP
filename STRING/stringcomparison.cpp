#include<iostream>
#include<string>
using namespace std;
int main(){
    string x="abc";
    string y="xyz"; // ek single differnce bhi bahat matter karta hai.
    if(x==y) cout<<"same"<<endl;
    else cout<<"not same"<<endl; 

    if(x>y) cout<<x<<"is greater than "<<y;  // string main greater chec karna ka rule hai kidka fisrt element bara hia.
    else cout<<y<<"is greater than"<<x<<endl;
}
