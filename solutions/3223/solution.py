class Solution:
    def minimumLength(self, s: str) -> int:
        alpha = [0] * 26

        for ch in s:
            index = ord(ch) - ord('a')
            alpha[index] = 1 if alpha[index]%2 == 0 else 2
        
        return sum(alpha)