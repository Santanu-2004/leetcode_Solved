class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        if(digits[size-1]!=9){
            digits[size-1] = digits[size-1]+1;
            return digits;
        }else{
            while(size-1 >= 0 && digits[size-1]==9){
                digits[size-1] = 0;
                if(size-1 >0 && digits[size-2] != 9){
                    digits[size-2] = digits[size-2] + 1;
                    return digits;
                }
                size--;
            }
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};