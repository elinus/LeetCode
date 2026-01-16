#include <cmath>
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  // Time Complexity: O(n) - single pass through the linked list
  // Space Complexity: O(1) - only uses constant extra space
  int getDecimalValue(ListNode *head) {
    int result{0};
    while (head) {
      result = (result << 1) | head->val;
      head = head->next;
    }
    return result;
  }
};

// Reverse linked-list ----- Not Needed as in this case we need to traverse
// the list twice
ListNode *reverseList(ListNode *head) {
  ListNode *prev_node{nullptr}, *curr_node{head}, *next_node{nullptr};
  while (curr_node) {
    next_node = curr_node->next;
    curr_node->next = prev_node;
    prev_node = curr_node;
    curr_node = next_node;
  }

  return prev_node;
}

int getDecimalValue(ListNode *head) {
  ListNode *rev_head_node = reverseList(head);
  ListNode *curr_node{rev_head_node};
  int exp{0}, result{0};
  while (curr_node) {
    result += (curr_node->val * pow(2, exp++));
    curr_node = curr_node->next;
  }
  return result;
}