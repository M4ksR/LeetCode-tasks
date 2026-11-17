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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode res = ListNode();
        ListNode* tail = &res;
        int ost = 0;

        while (l1 != nullptr || l2 != nullptr || ost != 0) {
            int a = (l1 == nullptr) ? 0 : l1->val;
            int b = (l2 == nullptr) ? 0 : l2->val;
            int sm = a + b + ost;
            
            if (sm >= 10) {
                sm -= 10;
                ost = 1;
            }
            else {
                ost = 0;
            }

            ListNode* nextNode = new ListNode(sm);
            tail->next = nextNode;
            tail = tail->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return res.next;
    }
};