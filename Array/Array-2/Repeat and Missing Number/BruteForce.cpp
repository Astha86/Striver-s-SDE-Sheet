#include<bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> arr) {
    int n = arr.size();
    int repeating = 0;
    int missing = 0;

    //Find the repeating and missing number:
    for(int i=1; i<=n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == i) count++;
        }

        if(count == 2) repeating = i;
        else if(count == 0) missing = i;

        if(repeating != 0 && missing != 0) break;
    }
    return {repeating, missing};
}

int main(){
    vector<int> a = {6, 5, 2, 5, 3, 6, 7, 1};
    vector<int> ans = helper(a);
    cout<<"The repeating number: "<<ans[0]<<endl; 
    cout<<"The missing number: "<<ans[1]<<endl;
    return 0;
}

// T.C = O(n^2)