class Solution {
    public int minimumLength(String s) {
        int[] alpha= new int[26];
        for(char c : s.toCharArray()){
            alpha[c-'a']++;
        }
        int len = 0;
        for(int i : alpha){
            if(i!=0){
                len += (i%2 == 0) ? 2 : 1;
            }
        }
        return len;
    }
}