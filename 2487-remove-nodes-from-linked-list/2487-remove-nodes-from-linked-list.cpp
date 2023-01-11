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
    int m = 0;
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL){
            return head;
        }
        head -> next = removeNodes(head -> next);
        if(head -> val < m) return head -> next;
        m = max(m, head -> val);
        return head;
    }
};