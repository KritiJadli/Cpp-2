#include<iostream>
#include<cmath>
using namespace std;
void revpower(int n){
    int og=n;
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    int power=round(pow(og,rev));
    cout<< power;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    revpower(n);
}