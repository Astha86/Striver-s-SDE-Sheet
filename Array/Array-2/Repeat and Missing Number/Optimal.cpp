

#include <bits/stdc++.h>
using namespace std;

vector<int> helper(vector<int> arr) {
    long long n = arr.size();

    // Sn and S2n:
    long long SN = (n*(n+1))/2;
    long long S2N = (n*(n+1)*(2*n+1))/6;

    // Calculate S and S2:
    long long S = 0;
    long long S2 = 0;
    for(int i=0; i<n; i++) {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }

    // S-Sn = x-y = a:
    long long a = S - SN;

    // S2-S2n = x^2 - y^2 = b:
    long long b = S2 - S2N;

    //Find x+y = (x^2-y^2)/(x-y):
    b = b / a;  // [(x+y)(x-y)]/(x-y) = x+y = b

    // x=((x+y)+(X-Y))/2 & y=x-(x-y),
    long long x = (a + b) / 2;
    long long y = x - a;

    return {(int)x, (int)y};
    // repeating = x, missing = y
}

int main(){
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = helper(a);
    cout<<"The repeating number: "<<ans[0]<<endl; 
    cout<<"The missing number: "<<ans[1]<<endl;
    return 0;
}

// T.C = O(n)
// S.C = O(1)