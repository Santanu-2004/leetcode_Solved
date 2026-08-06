class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])){
                count ++;
            }
        }
        int maxCount = count;
        int left = 0;
        int right = k;
        while(right < s.length()){
            if(isVowel(s[right])){
                count++;
            }
            if(isVowel(s[left])){
                count--;
            }

            maxCount = max(maxCount, count);
            right++;
            left++;
        }

        return maxCount;
    }
};