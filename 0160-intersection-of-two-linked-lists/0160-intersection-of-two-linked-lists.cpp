/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> mpp;
        ListNode* currA = headA;
        while(currA){
            mpp[currA]++;
            currA = currA -> next;
        }
        ListNode* currB = headB;
        while(currB){
            if(mpp[currB] > 0) return currB;
            currB = currB -> next;
        }
        return NULL;
    }
};