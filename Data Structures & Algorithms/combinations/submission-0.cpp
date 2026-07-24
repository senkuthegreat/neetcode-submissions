class Solution {
public:
    void working(vector<vector<int>>& ans, vector<int> part,int n,int k){
        part[k-1]=n;
        if(k==1){
            ans.push_back(part);
            return;
        }
        for(int i=n-1;i>=k-1;i--){
            working(ans,part,i,k-1);
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        for(int i=n;i>=k;i--){
            vector<int> part(k);
            working(ans, part,i,k);
        }
        return ans;
    }
};