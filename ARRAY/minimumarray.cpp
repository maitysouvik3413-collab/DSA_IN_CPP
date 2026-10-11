#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40};
    int min=arr[0];
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min=arr[i] ;
    
    }
    cout<<min;
} 