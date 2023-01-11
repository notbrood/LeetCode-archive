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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return head;
        if(head -> next == nullptr) return head;
        ListNode* prev = head;
        ListNode* next = head -> next;
        int v;
        while(next){
            v = prev -> val;
            prev -> val = next -> val;
            next -> val = v;
            prev = prev -> next -> next;
            if(next -> next){
                next = next -> next -> next;
            }
            else{
                break;
            }
        }
        return head;
    }
};