#include<iostream>
using namespace std;
/*void f(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    cout<<'largest element in the array is'<<largest;
}
int main(){
    int n;
    cout<<"enter the no. of elements you want";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(arr,n);

}*/
//finding the second largest element
/*void secondl(int arr[],int n){
    int largest= arr[0];
    int secondlar=INT8_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlar=largest;
            largest=arr[i];
        }
        else if(largest>arr[i] && arr[i]>secondlar){
            secondlar=arr[i];
        }
    }
    cout<<secondlar;

}
int main(){
    int n;
    cout<<"enter the no. oof elements you want in the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    secondl(arr,n);
}*/
//check whether an array is sorted or not
int sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
        }
        else{
           return false;
        }
    }return true;
}
int main(){
    int n;
    cout<<"enter the number of elements you want";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
}

