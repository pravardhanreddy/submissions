class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = 0;
        for(i = m + n - 1; i >= 0 && m > 0 && n > 0; i--){
            if(nums1[m-1] > nums2[n-1]) {
                nums1[i] = nums1[m-1];
                m--;
            }
            else {
                nums1[i] = nums2[n-1];
                n--;
            }
        }
        if(i != -1){
            if(m == 0){
                while(i>= 0) {
                    nums1[i] = nums2[i];
                    i--;
                }
            }
        }
    }
}
