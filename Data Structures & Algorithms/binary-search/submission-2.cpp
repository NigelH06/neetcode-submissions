class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())
            return -1; 

        int halfVal = nums[nums.size() / 2]; 
        int half = static_cast<int>(nums.size() / 2);
        if(target >= halfVal)
        {
            for(int i{half}; i < nums.size(); ++i)
            {
                if(target == nums[i])
                    return i;
            }
        }

        if(target <= halfVal)
        {
            for(int i{}; i < half; ++i)
            {
                if(target == nums[i])
                    return i;
            }
        }
        return -1;
    }

};
