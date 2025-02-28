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
    ListNode *getNode(ListNode *head, ListNode *slow){
        ListNode* intersection = slow;
        slow = head;
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return getNode(head, slow);
            }
        }
        return NULL;
    }

};