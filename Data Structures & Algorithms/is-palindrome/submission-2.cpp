class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
        for(char& ch : s)
            ch = tolower(ch);
        
        for(int i{}; i < s.length(); ++i)
        {
            if(ispunct(s[i]))
                s.erase(i--, 1); // erasing all punctuation
        }
        string copy; 
        for(int i = s.length() - 1; i >= 0; --i)
            copy += s[i]; 
        int start = 0, end = s.length() - 1; 
        while(s[start] != '\0')
        {
            if(s[start] != copy[start])
                return false; 
            start++;
        }
        return true; 
    }
};
