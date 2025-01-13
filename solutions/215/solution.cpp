class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap;
        for(int num : nums){
            if(heap.size()<k){
                heap.push(-1*num);
            } else {
                if(num > -1*heap.top()){
                    heap.pop();
                    heap.push(-1*num);
                }
            }
        }
        return -1*heap.top();
    }
};