class RandomizedSet {
public:
    unordered_map<int,int> hash;
    vector<int> keys;
    int i;
    /** Initialize your data structure here. */
    RandomizedSet() {
        i=0;
        //unordered_map<int,int> hash;
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        cout<<" insert "<<hash.size()<<" ";
        if(hash.size()!=0 && hash.find(val)!=hash.end())
        {
            return false;
        }
        keys.push_back(val);
        hash[val]=i;
        i++;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
         cout<<" remove "<<hash.size()<<" ";
        if(hash.size()!=0 && hash.find(val)!=hash.end())
        {
           // keys.erase(keys.begin()+hash[val]);
            hash.erase(val);
            cout<<hash.size()<<" ";
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        cout<<" random ";
        int ran=rand()%keys.size();
        while(hash.find(keys[ran])==hash.end())
          {
              ran=rand()%keys.size();
          }
        return keys[ran];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */