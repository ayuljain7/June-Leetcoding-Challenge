class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sum0=0,sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                sum0++;
            if(nums[i]==1)
                sum1++;
            if(nums[i]==2)
                sum2++;
        }
        int i=0;
        while(sum0>0)
        {
            nums[i]=0;
            i++;
            sum0--;
        }
         while(sum1>0)
        {
            nums[i]=1;
            i++;
            sum1--;
        }
         while(sum2>0)
        {
            nums[i]=2;
            i++;
            sum2--;
        }
    }
};