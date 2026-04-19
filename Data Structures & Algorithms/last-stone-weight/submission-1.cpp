class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(int num : stones) {
            pq.push(num);
        }

        while(pq.size() > 1) {

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x == y) {
                continue;
            }
            else if(x > y) {
                pq.push(x - y);
            }
            else{
                pq.push(y - x);
            }
        }

        if(!pq.empty())return pq.top();
        else return 0;
    }
};
