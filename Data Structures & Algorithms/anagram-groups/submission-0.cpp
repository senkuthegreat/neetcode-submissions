class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<string> s=strs;
        unordered_map<string,vector<string>> part;
        for(int i=0;i<size;i++){
            sort(s[i].begin(),s[i].end());
            part[s[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto& pair : part) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};