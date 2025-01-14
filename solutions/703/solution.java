class KthLargest {
    int size;
    PriorityQueue<Integer> heap;
    public KthLargest(int k, int[] nums) {
        heap = new PriorityQueue<>();
        size = k;
        for(int num : nums){
            if(heap.size() < size){
                heap.offer(num);
            } else if(num > heap.peek()){
                heap.poll();
                heap.offer(num);
            }
        }
    }
    
    public int add(int val) {
        if(heap.size() < size){
            heap.offer(val);
        } else if(val > heap.peek()){
            heap.poll();
            heap.offer(val);
        }
        return heap.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */