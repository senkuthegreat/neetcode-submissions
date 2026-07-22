class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> numcount;
        int size = nums.size();
        for(int i=0;i<size;i++){
            numcount[nums[i]]++;
        }
        vector<pair<int,int>> arr;
        for(auto& it : numcount){
            arr.push_back({it.second,it.first});
        }
        int arsz = arr.size();
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[arsz-i-1].second);
        }
        return ans;
    }
};