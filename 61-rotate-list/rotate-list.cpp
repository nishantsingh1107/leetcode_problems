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
    ListNode* newTail(ListNode* head, int n){
        ListNode* newtail = head;
        int cnt = 1;
        while(newtail != NULL){
            if(cnt == n) return newtail;
            cnt++;
            newtail = newtail->next;
        }
        return newtail;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int len = 1;
        ListNode* tail = head;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        if(k % len == 0) return head;
        k = k % len;
        tail->next = head;
        ListNode* newtail = newTail(head, len-k);
        head = newtail->next;
        newtail->next = NULL;
        return head;
    }
};