#include<iostream>
using namespace std;

int main(){
    int n,temp,x;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array befor: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    x=n;
    for(int i=-1;i<=n/2;i++){
        temp=arr[i];
        arr[i]=arr[x];
        arr[x]=temp;
        x--;
    }
    cout<<"\nArray after: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}