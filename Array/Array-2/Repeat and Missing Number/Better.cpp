// Through Hashing

#include<bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> arr) {
    int n = arr.size();
    int map[n+1] = {0};
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    
    int repeating = 0;
    int missing = 0;
    for(int i=1; i<=n; i++){
        if(map[i]==0) missing = i;
        else if(map[i]==2) repeating = i;
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


