class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int maxnum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 1){
                curr = 0;
            }else{
                curr++;
            }
            maxnum = max(maxnum,curr);
        }
        return maxnum;
    }
};