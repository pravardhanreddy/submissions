class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] sq = new int[nums.length];
        
        if(nums[nums.length-1] <= 0) {
            for(int pos = 0; pos < nums.length; pos++) sq[pos] = nums[nums.length - pos - 1] * nums[nums.length - pos - 1];
            return sq;
        }
        
        if(nums[0] >= 0) {
            for(int pos = 0; pos < nums.length; pos++) sq[pos] = nums[pos] * nums[pos];
            return sq;
        }
        
        int i = 0, j = 0;
        
        for(i = 0; i<nums.length-1 && nums[i] < 0;i++);
        j = i-1;
        
        for(int pos = 0; pos < nums.length; pos++){
            if(j < 0 || (i<nums.length && nums[i] < Math.abs(nums[j]))){
                sq[pos] = nums[i] * nums[i];
                i++;
            }
            else {
                sq[pos] = nums[j] * nums[j];
                j--;
            }
        }
        return sq;
    }
}
