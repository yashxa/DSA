#include<iostream>
using namespace std;

int maxsubarraysum(int n,int arr[]){
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum = currsum + arr[i];
        if(currsum > maxsum){
            maxsum = currsum;
        }if(currsum < 0){
            currsum=0;
        }
    }
    return(maxsum);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsubarraysum(n,arr);
    return 0;
}