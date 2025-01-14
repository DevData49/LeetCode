class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size();
        vector<int> freq(size+1,0), ans;
        int count=0;
        for(int i=0;i<size;i++){
            freq[A[i]]++;
            if(freq[A[i]] %2 == 0) count++;
            freq[B[i]]++;
            if(freq[B[i]] %2 == 0) count++;
            ans.push_back(count);
        }
        return ans;
    }
};