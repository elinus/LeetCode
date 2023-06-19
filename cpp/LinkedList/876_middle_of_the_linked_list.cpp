#include "ListNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    // Self <Faster>
    ListNode* middleNode(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Self - Accepted soln
    // ListNode* middleNode(ListNode* head) {
    //     if (!head || !head->next) return head;
    //     ListNode *curr{head}, *mid{head};
    //     int count = 0;
    //     while (curr) {
    //         if (count % 2) mid = mid->next;
    //         curr = curr->next;
    //         count++;
    //     }
    //     return mid;
    // }
};