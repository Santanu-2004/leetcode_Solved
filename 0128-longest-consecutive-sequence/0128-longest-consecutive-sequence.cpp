class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> freq;
        for(int x : nums){
            freq.insert(x);
        }
        int longest = 0;
        
        for(int i : freq){
            if(freq.find(i - 1) == freq.end()){
                int count = 1;
                while(freq.find(i + count) != freq.end()){
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};