class Solution {
public:
    vector<int> w_cum;
    int sum;
    Solution(vector<int>& w) {
         sum=0;
        for(int i=0;i<w.size();i++)
        {
            sum=sum+w[i];
            cout<<sum<<" ";
            w_cum.push_back(sum);
        }
    }
    
    int pickIndex() {
        int val=(rand()%sum);
        val++;
        cout<<val<<" ";
        int l=0,r=w_cum.size()-1;
        while(r>l)
        {
             int m=(l+r)/2;
            
            if(val>w_cum[m])
            {
                l=m+1; 
            }
            else
            {
                r=m;
                
            }
        }
        return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */