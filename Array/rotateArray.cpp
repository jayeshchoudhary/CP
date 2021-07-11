#include <iostream>
using namespace std;

int main() {
	int t, n, d;
	cin>>t;
	while(t--){
	    cin>>n>>d;
	    int a[n];
	    d = d % n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=d;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    for(int i=0;i<d;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

/* 
1. Rotate Array

Problem Statement - Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
Ex - 1,2,3,4,5,6,7 (rotate by 2)
ans - 3,4,5,6,7,1,2

Idea - check if the rotation is greater than n then take d mod n.
then rotate 
asdlfkjsd 
*/