class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false; 
        std::unordered_set<int> numsSet; 
        for(int i{}; i < nums.size(); ++i)
            numsSet.insert(nums[i]);
        if(numsSet.size() != nums.size())
            return true; 
        return false; 
    }
};