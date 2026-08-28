class Solution {

public:
    static bool compare(const pair<int, int>& a, const pair<int,int>& b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; 
        for(int i{}; i < nums.size(); ++i)
            map[nums[i]]++; 
        vector<pair<int, int>> buffer(map.begin(), map.end()); 
        sort(buffer.begin(), buffer.end(), compare); 
        int start = 0; 
        vector<int> result; 
        while(start < k)
            result.push_back(buffer[start++].first); 
        return result; 
    }
};
