class RandomizedSet {
    private:
    vector<int> nums;                    // Stores elements
    unordered_map<int, int> mp;         // value -> index in vector

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        // If value already exists, return false
        if (mp.find(val) != mp.end()) {
            return false;
        }
        
        // Add value to vector
        nums.push_back(val);
        
        // Store its index
        mp[val] = nums.size() - 1;
        
        return true;
    }
    
     bool remove(int val) {
        // If value does not exist
        if (mp.find(val) == mp.end()) {
            return false;
        }
        
        // Get index of value to remove
        int index = mp[val];
        
        // Get last element
        int lastElement = nums.back();
        
        // Move last element to deleted position
        nums[index] = lastElement;
        
        // Update moved element's index
        mp[lastElement] = index;
        
        // Remove last element from vector
        nums.pop_back();
        
        // Remove value from map
        mp.erase(val);
        
        return true;
    }
    
   int getRandom() {
        // Return random element from vector
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */