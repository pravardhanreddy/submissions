class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int nextOdd = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] % 2 == 1) {
                boolean found = false;
                int num = 0, index = 0;
                for(int j = i+1; j < nums.length; j++) {
                    if(nums[j]%2 == 0) {
                        found = true;
                        num = nums[j];
                        index = j;
                    }
                }
                if(found) {
                    int temp = nums[i];
                    nums[i] = num;
                    nums[index] = temp;
                }
                else break;
            }
        }
        return nums;
    }
}
