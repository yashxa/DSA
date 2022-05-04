#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int test=0;
    for(int i=0;i<n;i++){
        if((arr[i]<0)&&(i>0)){
            int ran;
            ran=arr[i];
            arr[i]=arr[test];
            arr[test]=ran;
            test++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}