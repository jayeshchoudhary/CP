#include<bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int value){
    if(left > right){
        return -1;
    }
    int mid = (left + right) / 2;
    if(arr[mid] == value){
        return mid;
    }
    else if(value < arr[mid]){
        return binarySearchRecursive(arr, left, mid-1, value);
    } else{
        return binarySearchRecursive(arr, mid + 1, right, value);
    }
}

int binarySearch(int arr[], int n, int value){
    int left = 0;
    int right = n-1;
    int mid;
    while(left < right){
        mid = (left + right) / 2;
        if(arr[mid] == value){
            return mid;
        }
        else if(value < arr[mid]){
            right = mid -1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int value = 11;
    int index = binarySearch(arr, 12, value);
    int indexR = binarySearchRecursive(arr, 0, 11, value);
    cout<<"value at index "<<index<<endl;
    cout<<"value at index (by recurssion) "<<indexR;
    return 0;
}