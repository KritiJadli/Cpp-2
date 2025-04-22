#include<iostream>
using namespace std;

void f(int arr[], int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest number: " << largest << endl;
}

int main() {
    int n;
    cout << "Enter the number of values you want: ";
    cin >> n;

    int arr[n]; // Declare the array with size n

    cout << "Enter the values: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Take input
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }

    f(arr, n); // Call the function to find the largest
    return 0;
}
