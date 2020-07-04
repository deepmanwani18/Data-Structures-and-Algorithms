#include<bits/stdc++.h>
using namespace std;
bool isSorted(int* arr, int size){
    if(size == 0 || size == 1) {
        return true;
    }
    if(arr[0] > arr[1]) {
        return false;
    }
    return isSorted(arr+1, size - 1);
}
int main() {
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: "; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << isSorted(arr, n);
}