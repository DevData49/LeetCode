class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        
        Map<Integer, Integer> freq = new HashMap<>();
        for(int num : nums){
            freq.put(num, freq.getOrDefault(num,0)+1);
        }
        PriorityQueue<Integer> heap = new PriorityQueue<>((n1, n2) -> freq.get(n1) - freq.get(n2));

        for (int key : freq.keySet()) {
            if (heap.size() < k) {
                heap.add(key);
            } else if (freq.get(heap.peek()) < freq.get(key)) {
                heap.poll();
                heap.add(key);
            }
        }
        int[] ans = new int[k];
        int i = 0;
        while(!heap.isEmpty()){
            ans[i++] = heap.poll();
        }

        return ans;
    }
}