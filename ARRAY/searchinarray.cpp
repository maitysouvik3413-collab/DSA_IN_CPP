#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,40};
    int n=sizeof(arr)/4;
    int target=30;
    for(int i=0;i<n;i++){
        if(target==arr[i]) cout<<"element found";
    }
}


#include<iostream>
using namespace std;
int main(){
    int arr[]={20,30,30,40};
    int n=sizeof(arr)/4;
    int target=30;
    for(int i=0;i<n;i++){
        if(target==arr[i]) {
            cout<<"element found";//kitni bar chalalo ek ho bar element found hoga.
        break;
        
        }
        }
    }

