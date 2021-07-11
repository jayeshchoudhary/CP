#include<bits/stdc++.h>
using namespace std;

// swap each element with every element and again call permutation on that element
// O(n!)
void permutation(string s, int currIndex) {
    if(currIndex == s.length()){
        cout<<s<<endl;
    }
    for(int i=currIndex; i<s.length(); i++){
        swap(s[currIndex], s[i]);
        permutation(s, currIndex + 1);
    }
}

int main() {
    string s = "abcd";
    permutation(s, 0);
    return 0;
}