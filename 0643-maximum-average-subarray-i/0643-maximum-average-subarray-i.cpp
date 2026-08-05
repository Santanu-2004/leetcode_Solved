class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //double avgNum = 0;
        // double currAvg = 0;
        double sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        double avgNum = sum / k;
        double currAvg = avgNum;
        int left = 0;
        int right = k;
        while(right < nums.size()){
            sum = sum + nums[right] - nums[left];
            avgNum = sum / k;
            currAvg = max(avgNum, currAvg);
            right++;
            left++;
        }
        return currAvg;
    }
};