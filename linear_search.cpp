#include <iostream>
using namespace std;
void linear(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            cout<<"found";
            break;
        }
    }cout<<"not found";
}


int main(){
    int n;
    cout<<"enter the number of elements you want in an array";
    cin>>n;
    int arr[n];
    cout<<"enter the number";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value to be searched";
    cin>>k;
    linear(arr,k,n);


}
