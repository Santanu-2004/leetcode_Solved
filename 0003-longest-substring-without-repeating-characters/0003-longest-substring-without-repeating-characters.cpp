class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if(s.length() == 0) return 0;
        // set<char> storeChar;
        // int maxLen = 0;
        // int len = 0;
        // for(int i = 0; i < s.length(); i++){
        //     if(storeChar.find(s[i]) == storeChar.end()){
        //         storeChar.insert(s[i]);
        //         len++;
        //     }else{
        //         maxLen = max(maxLen,len);
        //         storeChar.clear();
        //         storeChar.insert(s[i]);
        //         len = 1;
        //     }
        // }
        // return maxLen;
        unordered_set<char> st;
        int len = 0;
        int left = 0;

        for(int right = 0; right < s.length(); right++){
            // while(left <= right){
            //     if(st.find(s[right])!= st.end()){
            //         st.erase(s[left]);
            //         left++;
            //     }
            // }
            while(st.find(s[right])!= st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            len = max(len, right - left + 1);
        }
        return len;
        
    }
};