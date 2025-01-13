class Solution {
public:
    int minimumLength(string s) {
        vector<int> alpha(26,0);
        for(char ch : s){
            alpha[ch -'a'] = (alpha[ch-'a']%2 == 1) ? 2 : 1;
        }
        int count = 0;
        for(int i : alpha) count+=i;
        return count;
    }
};