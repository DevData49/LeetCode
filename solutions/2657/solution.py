class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        size = len(A)
        freq = [0]*(size+1)
        ans = [0]*size
        count = 0
        for i in range(size):
            freq[A[i]]+=1
            if freq[A[i]] == 2:
                count+=1
            freq[B[i]]+=1
            if freq[B[i]] == 2:
                count+=1
            ans[i] = count
        return ans