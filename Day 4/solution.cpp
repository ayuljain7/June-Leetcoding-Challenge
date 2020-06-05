class Solution {
public:
    void swap(char &a,char &b)
    {
        char i=a;
        a=b;
        b=i;
        
    }
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++)
        {
            swap(s[i],s[s.size()-1-i]);
        }
        return ;
    }
};