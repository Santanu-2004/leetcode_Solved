class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxCont = 0;
        int l = 0;
        int r = height.size() - 1;
        while(l < r){
            int h = min(height[l], height[r]);
            int dist = r - l;
            maxCont = max(maxCont, h * dist);
            
            //left right operation
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxCont;
    }
};