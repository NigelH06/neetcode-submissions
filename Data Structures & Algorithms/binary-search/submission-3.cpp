class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())
            return -1; 

        int left = 0; 
        int right = static_cast<int>(nums.size()) - 1; 
        while(left <= right)
        {
            int midPoint = left + (right - left) / 2; 
            int midVal = nums[midPoint]; 
            if(target == midVal)
                return midPoint; 
            
            if(target < midVal)
                right = midPoint - 1;
            if(target > midVal)
                left = midPoint + 1; 
        }
        return -1;
    }

};
