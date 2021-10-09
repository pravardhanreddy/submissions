class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int n : nums){
            count += (Integer.toString(n).length() + 1) % 2;
        }
        return count;
    }
}
