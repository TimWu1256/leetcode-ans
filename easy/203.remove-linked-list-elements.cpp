#include "struct/singly-linked-list.h"

class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        ListNode *cur = head;
        ListNode *pre = cur;
        while (cur != nullptr) {
            if (cur->val == val) {
                ListNode *tmp = cur;
                cur = cur->next;
                pre->next = cur;
                delete tmp;
            }
            else {
                pre = cur;
                cur = cur->next;
            }
        }

        return head;
    }
};