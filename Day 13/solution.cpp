class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size()==0)
        {
            vector<int> none;
            return none;
        }
        sort(nums.begin(),nums.end());
        vector<int> count;
        nums[0]==0 ? count.push_back(0): count.push_back(1);
        for(int i=1;i<nums.size();i++)
        {
            count.push_back(1);
            for(int j=i-1;j>=0;j--)
            {
                if(nums[i]%nums[j]==0)
                    count[i]=max(count[i],count[j]+1);
            }
        }
        int MaxIndex=0;
        for(int i=1;i<nums.size();i++)
        {
            if(count[MaxIndex]<count[i])
                MaxIndex=i;
        }
        int temp=nums[MaxIndex];
        int currentCount = count[MaxIndex];
       // cout<<temp<<" ";
        vector<int> Largest;
        for(int i=MaxIndex;i>=0;i--)
        {
            if(temp%nums[i]==0 && currentCount==count[i])
            {
                Largest.push_back(nums[i]);
                temp = nums[i];
                currentCount--;
            }
        }
      
        return Largest;
    }
};