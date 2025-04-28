//left rotate an array by d places
#include<iostream>
using namespace std;
void f(int arr[], int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }

}
int main(){
    int n;
    cout<<"enter the no. of elements you want";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"enter the number of left rotations you want";
    cin>>d;
    f(arr,n,d);
    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
}
