class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1; 
        while(start < end)
        {
            while((start < end) && !isalnum(s[start]))
                start++; 
            while((end > start) && !isalnum(s[end]))
                end--; 
            if(start >= end)
                return true;
            if(tolower(s[start]) == tolower(s[end]))
            {
                start++; 
                end--;
            }
            else
                return false;
        }
        return true;
    }
};
