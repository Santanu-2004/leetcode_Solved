class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans;
        vector<int> arr;
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ans.find(nums[i])== ans.end()){
                arr.push_back(nums[i]);
                ans.insert(nums[i]);
                k++;
            }
        }
        for(int i = 0; i < arr.size(); i++){
            nums[i] = arr[i];
        }
        return k;
        
        
    }
};