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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode *prev = NULL, *current = head, *nxt = head->next;
        while(current!=NULL){
            current->next = prev;
            prev = current;
            current = nxt;
            if(nxt!=NULL) nxt = nxt->next;
        }
        return prev;
    }
};