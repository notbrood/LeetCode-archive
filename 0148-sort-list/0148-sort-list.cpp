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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        while(head){
            vec.push_back(head -> val);
            head = head -> next;
        }
        sort(vec.begin(), vec.end());
        if(vec.size() == 0) return nullptr;
        ListNode* ans = new ListNode(vec[0]);
        head = ans;
        for(int i = 1; i<vec.size(); i++){
            head -> next = new ListNode(vec[i]);
            head = head -> next;
        }
        return ans;
    }
};