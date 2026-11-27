class Solution {
public:
    long double Power(long double X , long long N){
        if(N==0) return 1.0;
        

        long double halfpower = Power(X,N/2);


        if(N%2 != 0){
            return X*halfpower*halfpower;
        }

        return halfpower*halfpower;
    }


    double myPow(double x, int n) {
        long long N=n;
        long double X = x;
        if(N <0){
            X = 1/X;
            N=-N;
        }

        return (long double) Power(X ,N);
    }
};