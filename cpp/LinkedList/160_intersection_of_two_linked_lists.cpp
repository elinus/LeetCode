#include "ListNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
    // int listLength(ListNode *head) {
    //     int len = 0;
    //     if (!head) return len;
    //     ListNode *curr{head};
    //     while (curr) {
    //         curr = curr->next;
    //         len++;
    //     }
    //     return len;
    // }
    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB, int diff)
    // {
    //     ListNode *currA{headA}, *currB{headB};
    //     while (diff--) {
    //         currA = currA->next;
    //     }
    //     while (currA && currB) {
    //         if (currA == currB) return currA;
    //         currA = currA->next;
    //         currB = currB->next;
    //     }
    //     return nullptr;
    // }

   public:
    // NeetCode.io
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA{headA}, *currB{headB};
        while (currA != currB) {
            currA = currA ? currA->next : headA;
            currB = currB ? currB->next : headB;
        }

        return currA;
    }

    // Self ~ Working Soln, << Faster >>
    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     int alen = listLength(headA);
    //     int blen = listLength(headB);
    //     int diff = alen - blen;
    //     if (diff > 0)
    //         return getIntersectionNode(headA, headB, diff);
    //     else
    //         return getIntersectionNode(headB, headA, -diff);
    // }
};