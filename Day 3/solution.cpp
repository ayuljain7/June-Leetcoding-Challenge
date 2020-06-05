class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        sort(costs.begin(), costs.end(), [](const auto &lhs, const auto &rhs){
            return abs(lhs[0]-lhs[1]) > abs(rhs[0]-rhs[1]);
        });
         int minCost=0,countA=0,countB=0;
        //sort(costs.begin(),costs.end(),differnce)
        for(int i=0;i<costs.size();i++)
        {
            //cout<<min(costs[i][0],costs[i][1])<<" ";
            if(costs[i][0]<costs[i][1])
            {
                if(countA<costs.size()/2)
                {
                    countA++;
                    minCost=minCost+costs[i][0];
                }
                else
                {
                    countB++;
                    minCost=minCost+costs[i][1];
                }
            }
            else
            {
                if(countB<costs.size()/2)
                {
                    countB++;
                    minCost=minCost+costs[i][1];
                }
                else
                {
                    countA++;
                    minCost=minCost+costs[i][0];
                }
            }
            
        }
        return minCost;
    }
};