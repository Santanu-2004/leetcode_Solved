class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cur = 0;
        int lef = 0;
        int rig = nums.size() - 1;
        while (cur <= rig ){
            if(nums[cur] == 0){
                swap(nums[lef], nums[cur]);
                lef++;
                cur++;
            }
            else if(nums[cur] == 2){
                swap(nums[cur], nums[rig]);
                rig--;
            }else{
                cur++;
            }
        }
    }
};