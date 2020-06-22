class Solution {
public:
    int singleNumber(vector<int>& nums) {
	// Space and time complexity = O(n)
        unordered_map <int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(nums[i])==hash.end())
            {
                hash[nums[i]]=1;
            }
            else
            {
                hash[nums[i]]++;
            }
        }
        int val=0;
        for(int i=0;i<nums.size();i++)
        {
            if(hash[nums[i]]==1)
            {
                val= nums[i];
            }
        }
        return val;
    }
};