#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){
        if(mx<arr[i]) mx=arr[i] ;
    }
    int smax=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>smax && arr[i]!=mx) smax=arr[i];
    }
    cout<<mx<<" "<<smax<<endl;
}

    

