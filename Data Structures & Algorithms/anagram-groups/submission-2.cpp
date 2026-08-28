class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups; 
        for(string word : strs)
        {
            array<int, 26> count{};
            for(char ch : word)
                count[ch - 'a']++; 
            string key; 
            for(int n : count)
                key += to_string(n) + '#'; 
            groups[key].push_back(word);
        }        
        vector<vector<string>> anagrams; 
        for(auto& pair : groups)
            anagrams.push_back(pair.second); 

        return anagrams;
    }
};
