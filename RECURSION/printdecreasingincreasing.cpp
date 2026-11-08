#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<" "; 
    print(n-1);
    if(n!=1){
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    print(n);
}
