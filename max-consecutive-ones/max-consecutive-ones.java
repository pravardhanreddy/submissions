class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
        int curr = 0,max = 0;
        for(int num: nums){
            if(num == 1){
                curr += 1;
                if(curr > max) max = curr;
            }
            else curr = 0;
        }
        return max;
    }
}