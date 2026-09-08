class Solution {
public:
    bool isValid(string s) {
        for(int i{}; i < s.length(); ++i)
        {
            char current = s[i], next = s[i + 1]; 
            if((current == '(' && next == ')') || (current == '[' && next == ']') || (current == '{' && next == '}'))
            {
                s.erase(i , 2); 
                i = -1;
            }
        }
        if(s.empty())
            return true; 
        return false; 
    }
};
