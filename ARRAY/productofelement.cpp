#include<iostream>
using namespace std;
int main(){
    int mul=1;
    int arr[]={20,30,40};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        mul*=arr[i];
    }
    cout<<mul;
}


