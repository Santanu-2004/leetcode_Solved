class Solution {
public:
    int smallestNumber(int n, int t) {
        int value = n;
        while ( n >= 0){
            int prod = 1;
            while(n != 0){
                int digit = n % 10;
                prod *= digit;
                n = n / 10;
            }
            if(prod % t == 0){
                return value;
            }else{
                n = value + 1;
                value++;
            }

        }
        return 0;
    }
};