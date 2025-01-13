class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        priority_queue<pair<int,int>> pq;
        for(int num : nums){
            map[num]++;
        }
        for( auto [num, count] : map){
            if(pq.size() < k){
                pq.push({-1*count, num});
            } else if (count > -1*pq.top().first) {
                pq.pop();
                pq.push({-1*count, num});
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};