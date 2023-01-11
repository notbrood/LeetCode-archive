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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return head;
        if(head -> next == nullptr) return head;
        vector<ListNode*> heads;
        ListNode* curr = head;
        while(curr){
            heads.push_back(curr);
            curr = curr -> next;
        }
        curr = head;
        for(int i = 0; i<heads.size()/k; i++){
            ListNode* currcurr = curr;
            ListNode* currcurrcurr = curr;
            vector<int> vals;
            int p = k;
            while(p){
                vals.push_back(currcurr -> val);
                currcurr = currcurr -> next;
                p--;
            }
            curr = currcurr;
            reverse(vals.begin(),vals.end());
            p = k;
            int j = 0;
            while(p--){
                currcurrcurr -> val = vals[j];
                j++;
                currcurrcurr = currcurrcurr -> next;
            }
        }
        return head;
    }
};