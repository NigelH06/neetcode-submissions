class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false; 
        
        std::unordered_map<char, int> sSet; 
        std::unordered_map<char, int> tSet; 

        for(char ch : s)
            sSet[ch]++; 
        
        for(char ch : t)
            tSet[ch]++; 

        for(auto& pair : sSet)
        {
            if(pair.second != tSet[pair.first])
                return false;
        }

        return true;
    }
};
