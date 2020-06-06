class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](const auto &lhs, const auto &rhs){
            if(lhs[0]==rhs[0])
            {
                return lhs[1]<rhs[1];
            }
            else
            {
                return lhs[0]>rhs[0];
            }
        });
        vector<vector<int>>queue;
        for(vector<int> &ans:people)
        {
            queue.insert(queue.begin()+ans[1],ans);
        }
        return queue;
    }
};