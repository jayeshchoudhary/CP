#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int mid, int left, int right){
    int temp[right-left+1];
    int i = left;
    int j = mid+1;
    int k = left;
    while(i <= mid && j <= right){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    // insert the remaining elements
    while(i<=mid){
        temp[k] = arr[i];
        i++; k++;
    }
    while(j<=right){
        temp[k] = arr[j];
        j++; k++;
    }
    for(int i=left;i<=right;i++){
        arr[i] = temp[i];
    }
}

// split array into two equal halves (sort it) and then merge it 
void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, mid, left, right);
    }
}

int main() {
	int arr[] = {2,7,4,1,0,10};
	mergeSort(arr, 0, 5);
	for(auto i: arr){
	    cout<<i<<" ";
	}
	return 0;
}
