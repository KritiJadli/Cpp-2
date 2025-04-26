#include <iostream>
using namespace std;
//remove duplicated number from sorted arrayvo
int dup(int arr[],int n ){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }

    }
    return i+1;


}
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of elements you want";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"returned array is";
    int newarray=dup(arr,n);
    for(int i=0;i<newarray;i++){
        cout<<arr[i];
    }

}



