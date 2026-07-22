class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sc(26,0);
        vector<int> tc(26,0);
        int size = s.length();
        if(size!=t.length()) return false;
        for(int i=0;i<size;i++){
            sc[s[i]-97]++;
            tc[t[i]-97]++;
        }
        if(sc==tc) return true;
        return false;
    }
};
