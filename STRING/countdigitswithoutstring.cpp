#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    // string s= to_string(n);
    // cout<<s.length()<<endl; 

    string s= to_string(abs(n)); //abs for negative ko bho postive bana dei hai.
    cout<<s.length()<<endl;
    
}

