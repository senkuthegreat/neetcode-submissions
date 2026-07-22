class Solution {
public:
    bool pal(string &s, int i, int j){
        while (!isalnum(s[i]) && i<=j) i++;
        while (!isalnum(s[j]) && i<=j) j--;
        if (i>=j) return true;
        if (tolower(s[i])!=tolower(s[j])) return false;
        i++;
        j--;
        return pal(s,i,j);
    }
    bool isPalindrome(string& s) {
        if (s.size()==0 || s.size()==1 ) return true;
        int j = s.size()-1;
        return pal(s,0,j);
    }
};