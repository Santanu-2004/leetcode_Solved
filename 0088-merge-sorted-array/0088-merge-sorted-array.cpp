class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if(m == 0 && n != 0){
        //     nums1 = nums2;
        //     return;
        // }else if(n == 0 && m != 0){
        //     return;
        // }

        int size = m + n;
        while(n > 0 && m > 0){
            if(nums1[m-1] > nums2[n-1]){
                nums1[size-1] = nums1[m-1];
                m--;
                size--;
            }else if(nums1[m-1] == nums2[n-1]){
                nums1[size-1] = nums2[n-1];
                n--;
                size--;
            }else{
                nums1[size-1] = nums2[n-1];
                n--;
                size--;
            }
        }
        while(m > 0){
            nums1[size-1] = nums1[m-1];
            m--;
            size--;
        }
        while(n > 0){
            nums1[size-1] = nums2[n-1];
            n--;
            size--;
        }
    }
};