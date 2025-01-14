class KthLargest {
    priority_queue<int> heap;
    int size;
public:
    KthLargest(int k, vector<int>& nums) {
        this->size = k;
        for(int num : nums){
            if(heap.size() < size) {
                heap.push(-1*num);
            } else if(num > -1*heap.top()) {
                heap.pop();
                heap.push(-1*num);
            }
        }
    }
    
    int add(int val) {
        if(heap.size() < size) {
            heap.push(-1*val);
        } else if(val > -1*heap.top()) {
            heap.pop();
            heap.push(-1*val);
        }
        return -1*heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */