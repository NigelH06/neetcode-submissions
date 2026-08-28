class Solution {

public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; 
        int n = nums.size();
        for(int i{}; i < nums.size(); ++i)
            map[nums[i]]++; 

        vector<vector<int>> buckets(n + 1);
        for(const auto& [num, freq] : map)
            buckets[freq].push_back(num); 

        vector<int> result; 
        for(int freq = n; freq >= 1; freq--)
        {
            for(int num : buckets[freq])
            {
                if(result.size() == k)
                    break;

                result.push_back(num); 
            
            }
        }

        return result;
    }
};
