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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr = head;
        ListNode* fast = head;
        if(head == NULL || head -> next == NULL) return NULL; 
        while(curr != NULL && fast != NULL && fast -> next != NULL){
            curr = curr -> next;
            fast = fast -> next -> next;
        }
        ListNode* sachhiWalaCurr = head;
        while(sachhiWalaCurr){
            if(sachhiWalaCurr -> next == curr){
                break;
            }
            sachhiWalaCurr = sachhiWalaCurr -> next;
        }
        if(sachhiWalaCurr -> next == NULL){
            sachhiWalaCurr -> next = NULL;
        }
        else{
            sachhiWalaCurr -> next = sachhiWalaCurr -> next -> next;
        }
        return head;
    }
};