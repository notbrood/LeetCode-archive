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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ansHead = new ListNode(0);
        ListNode* currentAns = ansHead;
        bool shuruHua = false;
        while(head -> next != nullptr){
            if(!shuruHua){
                if(head -> val == 0){
                    shuruHua = true;
                }
            }
            else{
                if(head -> val == 0){
                    currentAns = currentAns -> next = new ListNode(0);
                }
                else{
                    currentAns -> val += head -> val;
                }
            }
            head = head -> next;
        }
        return ansHead;
    }
};