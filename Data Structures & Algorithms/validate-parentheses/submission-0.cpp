class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        int size=s.length();
        for(int i=0;i<size;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                bracket.push(s[i]);
                continue;
            }
            if(!bracket.empty()){
                if(bracket.top()=='(' && s[i]==')'){
                    bracket.pop();
                }
                else if(bracket.top()=='[' && s[i]==']'){
                    bracket.pop();
                }
                else if(bracket.top()=='{' && s[i]=='}'){
                    bracket.pop();
                }
                else return false;
            }
            else return false;
        }
        if(!bracket.empty()) return false;
        return true;

    }
};