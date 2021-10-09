class Solution {
    public int removeElement(int[] nums, int val) {
        int last = nums.length - 1;
        for(int i = 0; i <= last; i++){
            if(nums[i] == val) {
                nums[i] = nums[last];
                last--;
            }
            if(nums[i] == val) i--;
        }
        return last+1;
    }
}
