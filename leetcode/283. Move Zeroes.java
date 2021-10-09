class Solution {
    public void moveZeroes(int[] nums) {
        int curr = 0, i = 0;
        for(i = 0; i < nums.length; i++) {
            if(nums[i] != 0) {
                nums[curr] = nums[i];
                curr++;
            }
        }
        while(curr<nums.length) {
            nums[curr] = 0;
            curr++;
        }
        
    }
}
