class Solution {
public:
    bool isValid(string s) {
        stack <char> brackets; 
        for(int i{}; i < s.length(); ++i)
        {
            char ch = s[i]; 
            if(ch == '(' || ch == '[' || ch == '{')
                brackets.push(ch); 
            else if(ch == ')' || ch == ']' || ch == '}')
            {
                if(!brackets.empty())
                {
                    char top = brackets.top(); 
                    if(top == '{' && ch == '}' || top == '(' && ch == ')' || top == '[' && ch == ']')
                        brackets.pop(); 
                    else
                        return false;
                }
                else
                    return false;   
            }
        }

        if(brackets.empty())
            return true;
        
        return false;
    }
};
