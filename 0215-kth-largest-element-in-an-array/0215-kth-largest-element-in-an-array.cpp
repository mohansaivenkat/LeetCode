class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i : arr){
            if(pq.size()<k){
                pq.push(i);
            }
            else{
                pq.push(i);
                pq.pop();
            }
        }
        
        return pq.top();
        
    }
};