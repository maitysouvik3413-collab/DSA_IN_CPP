#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40};
    int max=arr[0];
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i] ;
        
    }
    cout<<max;
} 
        

