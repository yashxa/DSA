#include<iostream>
using namespace std;

/*void union_array(int a1,int *ar,int a2,int *arr){
    int ar[a1],arr[a2];
    int n=a1+a2;
    int x[n];
    int fin;
    for(int i=0;i<n;i++){
        if(i<a1){
            x[i]=ar[i];
        }
        fin=i;
    }
    for(int j=0;j<a2;j++){
        x[fin+j]=arr[j];
    }
    for(int i=0;i<n;i++){
        cout<<x[i];
    }
}*/

int main(){
    int a1,a2;
    cin>>a1>>a2;
    int ar[a1],arr[a2];
    for(int i=0;i<a1;i++){
        cout<<"Enter "<<i<<"array element of array 1"<<endl;
        cin>>ar[i];
    }
    for(int i=0;i<a2;i++){
        cout<<"Enter "<<i<<"array element of array 2"<<endl;
        cin>>arr[i];
    }
    //union_array(a1,ar,a2,arr);
    int n=a1+a2;
    int x[n];
    for(int i=0;i<n;i++){
        if(i<a1){
            x[i]=ar[i];
        }
    }
    for(int j=0;j<a2;j++){
        x[a1+j]=arr[j];
    }
    for(int i=0;i<n;i++){
        cout<<x[i];
    }
    cout<<endl;
    if(a1>a2){
        for(int i=0;i<a1;i++){
            for(int j=0;j<n;j++){
                if(ar[i]==arr[j]){
                    cout<<ar[i]<<endl;
                    break;
                }
            }
        }
    }else{
        for(int i=0;i<a2;i++){
            for(int j=0;j<a2;j++){
                if(arr[i]==ar[j]){
                    cout<<arr[i]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}