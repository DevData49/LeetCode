class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        minheap = []
        for key, val in freq.items():
            if len(minheap) < k:
                heapq.heappush(minheap, (val, key))
            elif val > minheap[0][0]:
                heapq.heappop(minheap)
                heapq.heappush(minheap, (val, key))
        ans = [item[1] for item in minheap]
        return ans