class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while (n != 1){
            int sum = 0;
            while(n != 0){
                int digit = n % 10;
                sum += digit * digit;
                n = n /10;
            }
            if(st.find(sum) != st.end()){
                return false;
            }else{
                st.insert(sum);
            }
            if(sum == 1){
                return true;
            }else{
                n = sum;
            }
        }
        return true;
    }
};