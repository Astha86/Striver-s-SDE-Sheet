// Ques: Given row and u have to print the entire number of that given row according to pascal triangle
// Sol: In this approach, for every column from 1 to n, we will calculate the element (n, c)(where n is the given row number and c is the column number that will vary from 1 to n) using the 1st method. Thus, we will print the row.  


#include<bits/stdc++.h>
using namespace std;

void nCr(int r, int c){
    int ans = 1;
    for(int i=0; i<c; i++){
        ans *= (r-i);
        ans /= (i+1);
    }
    cout<<ans<<" ";
}

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        nCr(n-1,i-1);
    }
    return 0;
}

// T.C = O(r*c)