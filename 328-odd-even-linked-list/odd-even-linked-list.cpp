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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* forv = head->next;
        ListNode* temp = head->next;
        while(forv != NULL && forv->next != NULL){
            prev->next = prev->next->next;
            forv->next = forv->next->next;
            prev = prev->next;
            forv = forv->next;
        }
        prev->next = temp;
        return head;
    }
};