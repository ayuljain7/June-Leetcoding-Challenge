class Solution {
public:
    int numSquares(int n) {
        int minSquare[n+1];
        for(int i=0;i<=n;i++)
        {
            minSquare[i]=INT_MAX;
        }
        minSquare[0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                minSquare[i]=min(minSquare[i],minSquare[i-j*j]+1);
            }
        }
        return minSquare[n];
    }
};