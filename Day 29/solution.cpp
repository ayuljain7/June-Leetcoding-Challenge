class Solution {
public:
    int uniquePaths(int m, int n) {
        /*solution is just a permutation of any solution 
        all solutions will have m-1 rights and n-1 downs 
        total = m+n-2
        total possible ways will be factorial of (m+n-2) divided by factorial of (m-1) and (n-1)
        */
        return fact(m,n);
    }
    long fact(int m,int n)
    {
       long product=1;
        int start,end;
        if(m<n) 
        {
            start=n;
            end=m;
        }
        else
        {
            start=m;
            end=n;
        }
        for(int i=start;i<=m+n-2;i++)
        {
            product=product*i;
        }
        long div=1;
        for(int i=1;i<end;i++)
        {
            div=div*i;
        }
        product=product/div;
        return int(product);
    }
};