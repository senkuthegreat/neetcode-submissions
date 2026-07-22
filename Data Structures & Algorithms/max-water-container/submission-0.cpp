class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, max = 0;
        while(i<j){
            int a = height[i], b = height[j];
            if (a>b){
                if(max<b*(j-i))
                    max = b*(j-i);
                j--;
            }
            else{
                if(max<a*(j-i))
                    max = a*(j-i);
                i++;
            }
        }
        return max;
        
    }
};