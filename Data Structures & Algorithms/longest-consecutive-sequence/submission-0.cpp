class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        if(size==0) return 0;
        int ans=1;
        int max=0;
        for(int i=0;i<size-1;i++){
            if(nums[i]==nums[i+1]-1)
                ans++;
            else if(nums[i]!=nums[i+1]){
                if(max<ans) max=ans;
                ans=1;
            }
        }
        if(max<ans) max=ans;
        return max;
    }
};