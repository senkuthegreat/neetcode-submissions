class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<size;i++){
            mpp[nums[i]]=i;
        }
        if(mpp.count(target)) return mpp[target];
        return -1;
    }
};