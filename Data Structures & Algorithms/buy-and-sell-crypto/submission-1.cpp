static const int __ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int low=prices[0],maxp=0;
        for(int i=0;i<size;i++){
            low=min(low,prices[i]);
            maxp=max(maxp,prices[i]-low);
        }
        return maxp;
    }
};