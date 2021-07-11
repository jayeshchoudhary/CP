#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for(int j = left; j <= right; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[right]);
    return i+1;
}

void quickSort(int arr[], int left, int right){
    if(left < right){
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

int main() {
    int arr[] = {2,1,5,6,0,11,-12};
    quickSort(arr, 0, 6);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}