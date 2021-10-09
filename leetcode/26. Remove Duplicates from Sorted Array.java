class Solution {
    public int removeDuplicates(int[] nums) {
        int next = 1, cur = 0;
        while (next < nums.length){
            if(nums[next] == nums[cur]) next++;
            else {
                cur++;
                nums[cur] = nums[next];
            }
        }
        return cur+1;
    }
}
