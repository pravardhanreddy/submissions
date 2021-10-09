class Solution {
    public boolean validMountainArray(int[] arr) {
        if(arr.length < 3) return false;
        
        int i = 0, j = arr.length - 1;
        
        while(i<j && arr[i] < arr[i+1]) i++;
        while(j>i && arr[j] < arr[j-1]) j--;
        
        return (i==j && i>0 && j<arr.length-1);
    }
}
