class Solution {
    public void duplicateZeros(int[] arr) {
        int count = 0, pos = arr.length - 1;
        for(int i = 0; i < arr.length; i++){
            if (arr[i] == 0) count++;
        }
        
        while(count>0){
            if(arr[pos] > 0){
                if(pos + count < arr.length) arr[pos + count] = arr[pos];
            }
            else {
                if(pos + count < arr.length) arr[pos + count] = 0;
                if(pos + count -1 < arr.length) arr[pos + count - 1] = 0;
                count--;
            }
            pos--;
        }
    }
}
