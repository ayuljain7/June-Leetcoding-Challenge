class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0;i<t.size();i++)
        {
            if(i<t.size() && j<s.size() && t[i]==s[j])
            {
                j++;
            }
            
        }
        if(j==s.size())
         {
            return true;
         }
        return false;
    }
};