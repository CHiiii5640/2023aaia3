class Solution {
public:
    double helper(double x,long long int n)
    {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        double now=helper(x,n/2);
        if(n%2==0)
            return now*now;
        else
            return now*now*x;

    }
    double myPow(double x, long long int n) {
        double ans=1;
        if(n<0)
        {
            n=-n;
            x=1/x;
        }
        return helper(x,n);
    }
};
