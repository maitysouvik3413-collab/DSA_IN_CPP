#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={5,4,3,6,2,1};
    int n=arr.size();
        print(arr);
        for(int j=0;j<=n-1;j++){
            int swaps=0;
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                    swaps++;
                }
            }
            if(swaps==0) break;//pura bahar wala loop tut jayega kuki outer wala loop ka bahar break lagya.
        }
        print(arr);
    }


      