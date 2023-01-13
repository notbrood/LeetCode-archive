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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        int n = 0;
        vector<int> nums;
        while(curr){
            n++;
            nums.push_back(head -> val);
            curr = curr -> next;
        }
        if(n == 0 || n == 1){
            return head;
        }
        if(k > n){
            if(k % n == 0){
                return head;
            }
            else{
                k = k%n;
            }
        }
        curr = head;
        int A[n];
        for(int i = 0; i<n; i++){
            A[(i+k)%n] = curr -> val;
            curr = curr -> next;
        }
        curr = head;
        for(int i = 0; i<n; i++){
            curr -> val = A[i];
            curr = curr -> next;
        }
        return head;
    }
};