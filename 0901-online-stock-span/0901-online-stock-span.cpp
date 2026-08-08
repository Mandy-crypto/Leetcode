class StockSpanner {
public:
    StockSpanner() {}
    vector<int> prices;
    int next(int price) {
        prices.push_back(price);
        int n=prices.size();
        int count=1;
        for(int i=n-2;i>=0;i--)
        {
            if(prices[i]<=prices[n-1]) count++;
            else break;
        }
        return count;
    }
};
