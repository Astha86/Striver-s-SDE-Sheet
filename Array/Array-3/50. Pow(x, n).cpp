class Solution {
public:
    double myPow(double x, int n) {
        long long pow = n;
        double ans = 1.0;
        if(pow<0) pow *= -1;

        while(pow){
            if(pow%2==0){
                x *= x;
                pow /= 2;
            }

            else{
                ans *= x;
                pow -= 1;
            }
        }

        if(n<0) ans = 1.0/ans;
        return ans;
    }
};

// T.C = O(log n)