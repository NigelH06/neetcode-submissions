class Solution {
public:

    string encode(vector<string>& strs) {
        string res; 
        for(int i{}; i < strs.size(); ++i)
            res += to_string(strs[i].length()) + "#" + strs[i]; 
        return res;
    }

    vector<string> decode(string s) {
        vector<string> decodedList; 
        int i{}; 
        while(i < s.length())
        {
            int j = i; 
            string num; 
            while(s[j] != '#')
            {
                num += s[j]; 
                j++; 
            }
            int length = stoi(num); 
            int count{}, k = j + 1; 
            string buf; 
            while(count < length)
            {
                buf += s[k]; 
                k++;
                count++;
            }
            decodedList.push_back(buf); 
            i = k;
        }
        return decodedList;
    }
};
