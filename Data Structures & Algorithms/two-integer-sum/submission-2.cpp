class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.empty())
            return {}; 
        std::unordered_map<int, int> numsMap; 

        for(int i{}; i < nums.size(); ++i)
            numsMap[nums[i]] = i; 
        
        for(int i{}; i < numsMap.size(); ++i)
            if(numsMap.count(target - nums[i]) && i != (numsMap[target - nums[i]]))
                return vector<int>{i, numsMap[target - nums[i]]}; 
        
        return {};
    }
};
