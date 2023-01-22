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
    void reorderList(ListNode* head) {
        vector<int> vals;
        ListNode* curr = head;
        if(head == NULL) return;
        while(curr){
            vals.push_back(curr -> val);
            curr = curr -> next;
        }
        int a = 0;
        int b = vals.size()-1;
        curr = head;
        int i = 0;
        for(int i = 0; i<vals.size(); i++){
            if(i%2 == 0){
                curr -> val = vals[a];
                a++;
            }
            else{
                curr -> val = vals[b];
                b--;
            }
            curr = curr -> next;
        }
        return ;
    }
};