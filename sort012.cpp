#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int ran;
                ran=arr[i];
                arr[i]=arr[j];
                arr[j]=ran;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}