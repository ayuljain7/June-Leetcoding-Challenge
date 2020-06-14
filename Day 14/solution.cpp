class Solution {
public:
   
   
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
         //1. Create an Adjacency List
        vector<vector<int>> route[n+1];
        
        //example :
        //0 : {1, 100, 0}, {2, 500, 0}
        //1 : {2, 100, 0}
        //2 : 
        
        
        for(int i=0;i<flights.size();i++) {
           route[flights[i][0]].push_back({flights[i][1], flights[i][2], 0});
            //from : source=flights[i][0]
            //to : dest =flights[i][1]
            //cost: cost from 'from' to 'to'=flights[i][2]
            //0: number of stops between 'from' and 'to'
        }
        
        
    //2. Create a queue for performing BFS
        queue<vector<int>> q;
        
     //3. Push source in q as {src, money spent so far, number of stops b/w current city and source}
        q.push({src, 0, -1});
        //Note : if {A, B} are two directly connected cities, then number of stops b/w them is Zero,
        //so for convenience i'm assuming number of stops b/w A and A as -1
        
     int minCost = INT_MAX;   //this keeps track of minimum cost
    
        
     while(!q.empty()) {
            vector<int> curStation = q.front(); 
            q.pop();
         
            int curCity = curStation[0];
            int curCost = curStation[1];
            int curK = curStation[2];      //this is the number of stops seen so far from source to current city
         
            if(curCity == dst) {
              minCost = min(minCost, curCost);
              continue;  
            }
             
         
            for(auto p : route[curCity]) {
                //we include a city in our route only if :
                // > it doesn't exceed number of stops alloted
                // > it keeps cost less than mincost
				//***
                if(curK+1 <= K and curCost + p[1] < minCost)
                {
                    q.push({p[0], p[1] + curCost, curK+1});
                }
            } 
         
     }   
        
     return minCost==INT_MAX?-1:minCost;  
    }
};