class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int size = nums.size();
        int zero = -1;
        for(int i=0;i<size;i++){
            if(nums[i]==0) zero = i;
            else product*=nums[i];
        }
        for(int i=0;i<size;i++){
            if(nums[i]==0 && i!=zero){
                return vector<int>(size,0);
            }
            if(nums[i]==0 && i==zero){
                nums[i]=product;
            }
            else if(zero>-1){
                nums[i]=0;
            }
            else nums[i]=product/nums[i];
        }
        return nums;
    }
};