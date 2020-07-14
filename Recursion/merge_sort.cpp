#include<bits/stdc++.h>
using namespace std;
void merge_sort2 (int arr[], int si, int ei) {
    if(si >= ei) {
        return;
    }
    int mid = (si + ei)/2;
    merge_sort2(arr, si, mid);
    merge_sort2(arr, mid+1, ei);
    // for(int i = si; i <= mid; i++) {
    //     cout << arr[i] <<" ";
    // }
    // cout << endl;
    // for(int i = mid+1; i <=ei; i++) {
    //     cout << arr[i] <<" ";
    // }
    // cout << endl;
    int new_size =  ei - si + 1;
    int temp[new_size];
    //here's where Merging of sorted arrays happens

    int i = 0;      //index of temp array
    int j = si;     //index of first sorted array
    int k = mid+1;  //index of second sorted array
    while(j <= mid && k <= ei) {
        if(arr[j] < arr[k]) {
            temp[i++] = arr[j++];
        } else {
            temp[i++] = arr[k++];
        }
    }
    while(j <= mid) {
        temp[i++] = arr[j++];
    }
    if(k <= ei) {
        temp[i++] = arr[k++];
    }
    int m = 0;
    for(int l = si; l <= ei ; l++) {
        arr[l] = temp[m];
        m++; 
    }
    // cout << endl;
}
void merge_sort(int arr[], int size) {
    int si = 0;
    int ei = size - 1;
    merge_sort2(arr, si, ei);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    merge_sort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}