class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;

        double val=log2(n);
       //cout<<std::setprecision (15)<<val<<" ";
        int val1=(int)val;
       // cout<<val1<<" ";

        if(val-val1>0)
            return false;

        return true;
    }
};