class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int size = nums.size();
        if (size < 3) return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> List;

        for (int i = 0; i < size - 2; ++i) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] + nums[i + 1] + nums[i + 2] > 0) break;
            if (nums[i] + nums[size - 1] + nums[size - 2] < 0) continue;

            int j = i + 1, k = size - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum > 0) {
                    --k;
                } else if (sum < 0) {
                    ++j;
                } else {
                    List.push_back({nums[i], nums[j], nums[k]});
                    ++j;
                    --k;
                    
                    while (j < k && nums[j] == nums[j - 1]) ++j;
                    while (j < k && nums[k] == nums[k + 1]) --k;
                }
            }
        }
        return List;
    }
};