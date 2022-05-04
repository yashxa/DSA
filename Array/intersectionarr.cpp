#include<iostream>
using namespace std;

int main(){
    int a1,a2;
    cin>>a1>>a2;
    int ar[a1],arr[a2];
    for(int i=0;i<a1;i++){
        cin>>ar[i];
    }
    for(int i=0;i<a2;i++){
        cin>>arr[i];
    }
    cout<<"Common elements: "<<endl;
    if(a1>a2){
        for(int i=0;i<a1;i++){
            for(int j=0;j<a2;j++){
                if(ar[i]==arr[j]){
                    cout<<arr[j]<<endl;
                }
            }
        }
    }else{
        for(int i=0;i<a2;i++){
            for(int j=0;j<a1;j++){
                if(ar[i]==arr[j]){
                    cout<<arr[j]<<endl;
                }
            }
        }
    }
    return 0;
}