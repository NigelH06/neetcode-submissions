class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit{};
        for(int i{}; i < prices.size(); ++i)
        {
            for(int j{i + 1}; j < prices.size(); ++j)
            {
                int pProfit = prices[j] - prices[i]; 
                if(pProfit > profit)
                    profit = pProfit; 
            }
        }
        return profit; 
    }
};
