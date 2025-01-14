class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int size = A.length;
        int[] freq = new int[size+1];
        int[] ans  = new int[size];
        int count = 0;
        for(int i=0;i<size;i++){
            freq[A[i]]++;
            if(freq[A[i]] == 2) count++;
            freq[B[i]]++;
            if(freq[B[i]] == 2) count++;
            ans[i] = count;
        }
        return ans;
    }
}