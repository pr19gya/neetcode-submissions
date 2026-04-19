/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> pq;

        for(ListNode* l : lists) {
            if(l)
            pq.push({l -> val, l});
        }

        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;

        while(!pq.empty()) {
            ListNode* s = pq.top().second;
            pq.pop();
            curr -> next = s;
            curr = curr -> next;
            if(s -> next) {
                pq.push({s -> next -> val, s -> next});
            }
        }

        return dummy -> next;

    }
};
