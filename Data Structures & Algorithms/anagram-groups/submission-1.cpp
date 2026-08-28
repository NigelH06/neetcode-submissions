class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Process:
        // 1. use an array to count all chars in the string
        // 2. use that array as a key to storing string values in a hash map 

        std::unordered_map<string, vector<string>> groups; 
        for(string word : strs)
        {
            array<int, 26> count{};
            for(char ch : word)
                count[ch - 'a']++; // mapping a to index 0
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
