#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="926";
    int n=s.length();
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<s.substr(i,j)<<" ";
            sum+=stoll(s.substr(i,j));
        }
        cout<<endl;
    }
    cout<<sum;
}
        