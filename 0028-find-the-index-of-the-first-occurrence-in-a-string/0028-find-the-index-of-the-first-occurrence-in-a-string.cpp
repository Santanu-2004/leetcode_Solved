class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int k = i;
                bool found = true;
                for(int j = 0; j < needle.length();j++){
                    if(k >= haystack.length() || needle[j] != haystack[k]){
                        found = false;
                        break;
                    }
                    k++;
                }
                if(found){
                    return i;
                }
            }
        }
        return -1;
    }
};