#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
    cout<<sum;
}

#include<iostream>
using namespace std;
int main(){
    int arr[]={23,22,21,20,19,18,16};
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<=n-1;i++){//i<=n-1 or i<n same hota hai.
        sum+=arr[i];
    }
    cout<<sum<<endl;
    }




