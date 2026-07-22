class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if(map.count(target - nums[i])){
                return {map[target - nums[i]], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};