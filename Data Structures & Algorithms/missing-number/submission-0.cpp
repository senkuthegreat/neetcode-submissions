class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        vector<bool> seen(size+1,0);
        for(int i=0;i<size;i++){
            seen[nums[i]]=1;
        }
        for(int i=0;i<size+1;i++){
            if(!seen[i]) return i;
        }
        return 0;
    }
};