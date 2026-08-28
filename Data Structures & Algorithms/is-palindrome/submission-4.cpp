class Solution {
public:
    bool isPalindrome(string s) {
        string copy;
        for(char ch : s)
            if(isalnum(ch))
                copy += ch; 
        int start = 0, end = copy.length() - 1; 
        while(start < end)
        {
            char startCh = copy[start], endCh = copy[end]; 
            if(tolower(startCh) != tolower(endCh))
                return false;
            start++;
            end--;
        }
        return true;
    }
};
