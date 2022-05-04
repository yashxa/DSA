#include<iostream>
using namespace std;

void rotate(int n,int arr[]){
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=arr[n];

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(n,arr);
    return 0;
}