// Ques: Given row and column of the number then what is the number in pascal triangle
// Sol: That will be equals to the (r-1)C(c-1)  => nCr(Combination)

// if 5C3 then 5*4*3*2*1/(3*2*1)(2*1)   =>(No need to do so much calculation)
// Shortcut: 5C3= 5*4*3/3*2*1


#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    r -= 1;
    c -= 1;
    int ans = 1;
    for(int i=0; i<c; i++){
        ans *= (r-i);
        ans /= (i+1);
    }

    cout<<ans;
    return 0;
}

// T.C = O(c)