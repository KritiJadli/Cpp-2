#include<iostream>
using namespace std;
void f(int arr[],int n){
    int temp=0;
    for (int i=0;i<n;i++){
        if (arr[i]!=0){
            arr[temp++]=arr[i];
        }
    }
        while(temp<n){
            arr[temp++]=0;
    


    } 
}
int main(){
    int n;
    cout<<"enter no. of elements you want";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
