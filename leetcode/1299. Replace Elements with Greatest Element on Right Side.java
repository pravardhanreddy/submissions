class Solution {
    public int[] replaceElements(int[] arr) {
        int max = highest(arr, 0);
        for(int i = 0; i < arr.length-1; i++) {
            if(arr[i] == max) max = highest(arr, i+1);
            arr[i] = max;
        }
        arr[arr.length - 1] = -1;
        return arr;
    }
    private int highest(int[] arr, int j){
        int max = -1;
        while (j < arr.length) {
            max = (max < arr[j]) ? arr[j] : max;
            j++;
        }
        return max;
    }
}
