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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        int len = 0;

        while(temp1 != nullptr) {
            temp1 = temp1 -> next;
            len++;
        }

        if(len == 1 && n == 1)return nullptr;

        ListNode* temp2 = head;
        if(len == n){
            return head->next;
        }
        int count = 1;

        while(count != len - n) {
            count++;
            temp2 = temp2 -> next;
        }

        if(n != 1) {
            temp2 -> next = temp2 -> next -> next;
        }
        else{
            temp2 -> next = nullptr;
        }
        
        

        
        return head;
    }
};
