#include<iostream>
using namespace std;

int maxindex(int K,int n,int arr[]){
    int max=0;
    int indexval=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            indexval=i;
        }
    }
    return(indexval);
}

int minindex(int K,int n,int arr[]){
    int min=arr[0];
    int indexval=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            indexval=i;
        }
    }
    return(indexval);
}


int main(){
    int K,n;
    cin>>n>>K;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=maxindex(K,n,arr);
    arr[x]=arr[x]-K;
    int y=minindex(K,n,arr);
    arr[y]=arr[y]+K;
    int min=arr[0];
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max-min;
    return 0;
}