#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="Souvik";
    s.pop_back();
    s.push_back('h');
    cout<<s<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}

