#include<iostream>
using namespace std;
void deeksha(int n){
    cout<<"deeksha"<<endl;
    if(n==0) return ;
    deeksha(n-1);
}
int main(){
    deeksha(3);
}
