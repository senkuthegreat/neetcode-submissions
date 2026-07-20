class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<bool> seen(2*pow(10,9),0);
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(seen[nums[i]+pow(10,9)]){
                return true;
            }
            seen[nums[i]+pow(10,9)]=1;
        }
        return false;
    }
};