class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1; 
        while(r>=l)
        {
            int mid=l+(r-l)/2;
           // cout<<mid<<" ";
            if(target==nums[mid])
            {
                return mid;
            }
            if(target<nums[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};